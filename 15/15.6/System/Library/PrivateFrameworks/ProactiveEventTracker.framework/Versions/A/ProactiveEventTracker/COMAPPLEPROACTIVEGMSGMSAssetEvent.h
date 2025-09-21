@interface COMAPPLEPROACTIVEGMSGMSAssetEvent : PBCodable <NSCopying> {
    struct { unsigned char latencyMillis : 1; unsigned char memoryCostKB : 1; unsigned char version : 1; unsigned char loadReason : 1; unsigned char loadResult : 1; unsigned char loadType : 1; } _has;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) long long version;
@property (nonatomic) char hasLoadType;
@property (nonatomic) int loadType;
@property (nonatomic) char hasLoadReason;
@property (nonatomic) int loadReason;
@property (nonatomic) char hasLoadResult;
@property (nonatomic) int loadResult;
@property (nonatomic) char hasMemoryCostKB;
@property (nonatomic) unsigned long long memoryCostKB;
@property (nonatomic) char hasLatencyMillis;
@property (nonatomic) double latencyMillis;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsLoadReason:(id)a0;
- (int)StringAsLoadType:(id)a0;
- (int)StringAsLoadResult:(id)a0;
- (id)loadReasonAsString:(int)a0;
- (id)loadResultAsString:(int)a0;
- (id)loadTypeAsString:(int)a0;

@end
