@class NSData;

@interface AWDMETRICSKCellularPowerLogNRNSAENDCEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char event : 1; unsigned char fr : 1; unsigned char numSubs : 1; unsigned char subsId : 1; unsigned char isDataPreferred : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasEvent;
@property (nonatomic) int event;
@property (nonatomic) BOOL hasFr;
@property (nonatomic) int fr;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) BOOL hasNumSubs;
@property (nonatomic) unsigned int numSubs;
@property (readonly, nonatomic) BOOL hasPlmn;
@property (retain, nonatomic) NSData *plmn;
@property (nonatomic) BOOL hasIsDataPreferred;
@property (nonatomic) BOOL isDataPreferred;

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
- (int)StringAsEvent:(id)a0;
- (id)eventAsString:(int)a0;
- (int)StringAsFr:(id)a0;
- (id)frAsString:(int)a0;

@end
