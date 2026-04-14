@class NSMutableArray;

@interface AWDMETRICSCellularNrRadioStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char durationMs : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *bwpInfos;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) unsigned int durationMs;

+ (Class)bwpInfoType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)bwpInfoAtIndex:(unsigned long long)a0;
- (void)addBwpInfo:(id)a0;
- (unsigned long long)bwpInfosCount;
- (void)clearBwpInfos;

@end
