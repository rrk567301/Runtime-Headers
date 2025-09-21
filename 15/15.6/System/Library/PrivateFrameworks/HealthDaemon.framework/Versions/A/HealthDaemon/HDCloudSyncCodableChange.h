@class HDCodableSyncAnchorRangeMap;

@interface HDCloudSyncCodableChange : PBCodable <NSCopying> {
    struct { unsigned char changeIndex : 1; unsigned char changeSize : 1; unsigned char protocolVersion : 1; unsigned char finalForSequence : 1; } _has;
}

@property (readonly, nonatomic) char hasAnchorRangeMap;
@property (retain, nonatomic) HDCodableSyncAnchorRangeMap *anchorRangeMap;
@property (nonatomic) char hasProtocolVersion;
@property (nonatomic) long long protocolVersion;
@property (nonatomic) char hasChangeSize;
@property (nonatomic) long long changeSize;
@property (nonatomic) char hasChangeIndex;
@property (nonatomic) long long changeIndex;
@property (nonatomic) char hasFinalForSequence;
@property (nonatomic) char finalForSequence;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
