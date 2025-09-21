@class HDCodableSyncEntityVersionMap, NSString, HDCodableSyncIdentity, NSData, HDCodableNanoSyncChangeSet, HDCodableNanoSyncStatus, HDCodableNanoSyncActivationRestore;

@interface HDCodableNanoSyncMessage : PBCodable <HDNanoSyncDescription, NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char hasVersion;
@property (nonatomic) int version;
@property (readonly, nonatomic) char hasPersistentPairingUUID;
@property (retain, nonatomic) NSData *persistentPairingUUID;
@property (readonly, nonatomic) char hasHealthPairingUUID;
@property (retain, nonatomic) NSData *healthPairingUUID;
@property (readonly, nonatomic) char hasChangeSet;
@property (retain, nonatomic) HDCodableNanoSyncChangeSet *changeSet;
@property (readonly, nonatomic) char hasStatus;
@property (retain, nonatomic) HDCodableNanoSyncStatus *status;
@property (readonly, nonatomic) char hasActivationRestore;
@property (retain, nonatomic) HDCodableNanoSyncActivationRestore *activationRestore;
@property (readonly, nonatomic) char hasEntityVersionMap;
@property (retain, nonatomic) HDCodableSyncEntityVersionMap *entityVersionMap;
@property (readonly, nonatomic) char hasCurrentSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *currentSyncIdentity;

+ (id)messageFromPersistentUserInfo:(id)a0;
+ (id)messageWithSyncStore:(id)a0 profile:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyPersistentUserInfo;
- (id)decodedHealthPairingUUID;
- (id)decodedPersistentPairingUUID;
- (id)nanoSyncDescription;

@end
