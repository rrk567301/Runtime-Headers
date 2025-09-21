@interface AppTelemetryQBSInvestigation : PBCodable <NSCopying> {
    struct { unsigned char clientTruthDirFaultCount : 1; unsigned char serverTruthDirCount : 1; unsigned char serverTruthDirFaultCount : 1; unsigned char serverTruthTotalItemsCount : 1; unsigned char timeSinceLogin : 1; } _has;
}

@property (nonatomic) char hasServerTruthDirCount;
@property (nonatomic) unsigned long long serverTruthDirCount;
@property (nonatomic) char hasServerTruthDirFaultCount;
@property (nonatomic) unsigned long long serverTruthDirFaultCount;
@property (nonatomic) char hasClientTruthDirFaultCount;
@property (nonatomic) unsigned long long clientTruthDirFaultCount;
@property (nonatomic) char hasTimeSinceLogin;
@property (nonatomic) unsigned long long timeSinceLogin;
@property (nonatomic) char hasServerTruthTotalItemsCount;
@property (nonatomic) unsigned long long serverTruthTotalItemsCount;

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
