@interface AWDNwExclusionCount : PBCodable <NSCopying> {
    struct { unsigned char reasonCode : 1; unsigned char rssi : 1; unsigned char usageRank : 1; } _has;
}

@property (nonatomic) char hasReasonCode;
@property (nonatomic) unsigned int reasonCode;
@property (nonatomic) char hasRssi;
@property (nonatomic) int rssi;
@property (nonatomic) char hasUsageRank;
@property (nonatomic) unsigned int usageRank;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
