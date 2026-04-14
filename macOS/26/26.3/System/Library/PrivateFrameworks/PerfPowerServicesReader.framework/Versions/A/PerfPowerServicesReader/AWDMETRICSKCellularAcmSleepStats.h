@class NSMutableArray;

@interface AWDMETRICSKCellularAcmSleepStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char durationMs : 1; unsigned char numSubs : 1; unsigned char isDataPreferred : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (retain, nonatomic) NSMutableArray *acms;
@property (nonatomic) BOOL hasNumSubs;
@property (nonatomic) unsigned int numSubs;
@property (nonatomic) BOOL hasIsDataPreferred;
@property (nonatomic) BOOL isDataPreferred;

+ (Class)acmType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addAcm:(id)a0;
- (id)acmAtIndex:(unsigned long long)a0;
- (unsigned long long)acmsCount;
- (void)clearAcms;

@end
