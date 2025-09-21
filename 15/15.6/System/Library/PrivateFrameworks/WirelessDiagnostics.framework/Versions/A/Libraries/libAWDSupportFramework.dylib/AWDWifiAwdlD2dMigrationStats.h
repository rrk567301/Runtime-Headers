@interface AWDWifiAwdlD2dMigrationStats : PBCodable <NSCopying> {
    struct { unsigned char rxBytes : 1; unsigned char sessionDuration : 1; unsigned char txBytes : 1; unsigned char avgCCA : 1; unsigned char channel : 1; unsigned char migrationRole : 1; unsigned char peerRssi : 1; unsigned char txFailureCount : 1; } _has;
}

@property (nonatomic) char hasSessionDuration;
@property (nonatomic) unsigned long long sessionDuration;
@property (nonatomic) char hasChannel;
@property (nonatomic) unsigned int channel;
@property (nonatomic) char hasRxBytes;
@property (nonatomic) unsigned long long rxBytes;
@property (nonatomic) char hasPeerRssi;
@property (nonatomic) int peerRssi;
@property (nonatomic) char hasTxFailureCount;
@property (nonatomic) unsigned int txFailureCount;
@property (nonatomic) char hasTxBytes;
@property (nonatomic) unsigned long long txBytes;
@property (nonatomic) char hasMigrationRole;
@property (nonatomic) unsigned int migrationRole;
@property (nonatomic) char hasAvgCCA;
@property (nonatomic) unsigned int avgCCA;

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
