@class NSString, HDCloudSyncCodableShardPredicate, NSData, HDCodableSyncIdentity;

@interface HDCloudSyncCodableStore : PBCodable <NSCopying> {
    struct { unsigned char order : 1; unsigned char deviceMode : 1; unsigned char requiredProtocolVersion : 1; unsigned char supportedProtocolVersion : 1; unsigned char active : 1; unsigned char isChild : 1; } _has;
}

@property (readonly, nonatomic) char hasOwnerIdentifier;
@property (retain, nonatomic) NSString *ownerIdentifier;
@property (readonly, nonatomic) char hasPendingOwnerIdentifier;
@property (retain, nonatomic) NSString *pendingOwnerIdentifier;
@property (nonatomic) char hasOrder;
@property (nonatomic) long long order;
@property (readonly, nonatomic) char hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;
@property (readonly, nonatomic) char hasPendingSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *pendingSyncIdentity;
@property (nonatomic) char hasIsChild;
@property (nonatomic) char isChild;
@property (readonly, nonatomic) char hasStoreIdentifier;
@property (retain, nonatomic) NSData *storeIdentifier;
@property (nonatomic) char hasActive;
@property (nonatomic) char active;
@property (nonatomic) char hasDeviceMode;
@property (nonatomic) int deviceMode;
@property (nonatomic) char hasSupportedProtocolVersion;
@property (nonatomic) int supportedProtocolVersion;
@property (nonatomic) char hasRequiredProtocolVersion;
@property (nonatomic) int requiredProtocolVersion;
@property (readonly, nonatomic) char hasSystemBuildVersion;
@property (retain, nonatomic) NSString *systemBuildVersion;
@property (readonly, nonatomic) char hasProductType;
@property (retain, nonatomic) NSString *productType;
@property (readonly, nonatomic) char hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) char hasShardPredicate;
@property (retain, nonatomic) HDCloudSyncCodableShardPredicate *shardPredicate;

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
- (int)StringAsSupportedProtocolVersion:(id)a0;
- (int)StringAsDeviceMode:(id)a0;
- (int)StringAsRequiredProtocolVersion:(id)a0;
- (id)deviceModeAsString:(int)a0;
- (id)requiredProtocolVersionAsString:(int)a0;
- (id)supportedProtocolVersionAsString:(int)a0;

@end
