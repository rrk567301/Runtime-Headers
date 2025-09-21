@class NSString, TPPBSecureElementIdentity, NSData, NSMutableArray, TPPBPeerStableInfoSetting;

@interface TPPBPeerStableInfo : PBCodable <NSCopying> {
    struct { unsigned char clock : 1; unsigned char flexiblePolicyVersion : 1; unsigned char frozenPolicyVersion : 1; unsigned char userControllableViewStatus : 1; unsigned char isInheritedAccount : 1; } _has;
}

@property (nonatomic) char hasClock;
@property (nonatomic) unsigned long long clock;
@property (nonatomic) char hasFrozenPolicyVersion;
@property (nonatomic) unsigned long long frozenPolicyVersion;
@property (readonly, nonatomic) char hasFrozenPolicyHash;
@property (retain, nonatomic) NSString *frozenPolicyHash;
@property (readonly, nonatomic) char hasOsVersion;
@property (retain, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) char hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) char hasRecoverySigningPublicKey;
@property (retain, nonatomic) NSData *recoverySigningPublicKey;
@property (readonly, nonatomic) char hasRecoveryEncryptionPublicKey;
@property (retain, nonatomic) NSData *recoveryEncryptionPublicKey;
@property (readonly, nonatomic) char hasSerialNumber;
@property (retain, nonatomic) NSString *serialNumber;
@property (nonatomic) char hasFlexiblePolicyVersion;
@property (nonatomic) unsigned long long flexiblePolicyVersion;
@property (readonly, nonatomic) char hasFlexiblePolicyHash;
@property (retain, nonatomic) NSString *flexiblePolicyHash;
@property (retain, nonatomic) NSMutableArray *policySecrets;
@property (nonatomic) char hasUserControllableViewStatus;
@property (nonatomic) int userControllableViewStatus;
@property (retain, nonatomic) NSMutableArray *custodianRecoveryKeys;
@property (readonly, nonatomic) char hasSecureElementIdentity;
@property (retain, nonatomic) TPPBSecureElementIdentity *secureElementIdentity;
@property (readonly, nonatomic) char hasWalrus;
@property (retain, nonatomic) TPPBPeerStableInfoSetting *walrus;
@property (readonly, nonatomic) char hasWebAccess;
@property (retain, nonatomic) TPPBPeerStableInfoSetting *webAccess;
@property (nonatomic) char hasIsInheritedAccount;
@property (nonatomic) char isInheritedAccount;

+ (Class)custodianRecoveryKeysType;
+ (Class)policySecretsType;

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
- (int)StringAsUserControllableViewStatus:(id)a0;
- (void)addCustodianRecoveryKeys:(id)a0;
- (void)addPolicySecrets:(id)a0;
- (void)clearCustodianRecoveryKeys;
- (void)clearPolicySecrets;
- (id)custodianRecoveryKeysAtIndex:(unsigned long long)a0;
- (unsigned long long)custodianRecoveryKeysCount;
- (id)policySecretsAtIndex:(unsigned long long)a0;
- (unsigned long long)policySecretsCount;
- (id)userControllableViewStatusAsString:(int)a0;

@end
