@class NSString, NSDictionary, CKUploadRequestConfiguration, NSArray, NSNumber, CKAccountOverrideInfo;
@protocol CKTestDeviceReferenceProtocol;

@interface CKContainerOptions : NSObject <CKPropertiesDescription, CKSQLiteItem, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property long long qualityOfService;
@property char returnPCSMetadata;
@property (retain) CKUploadRequestConfiguration *uploadRequestConfiguration;
@property (copy) NSString *personaIdentifier;
@property char returnRequestOperationProto;
@property char isServiceManatee;
@property (copy) NSDictionary *fakeEntitlements;
@property char holdAllOperations;
@property (copy) NSNumber *immediateUseDatabaseScopeForTesting;
@property (retain) id<CKTestDeviceReferenceProtocol> testDeviceReferenceProtocol;
@property char captureResponseHTTPHeaders;
@property char useZoneWidePCS;
@property (copy) CKAccountOverrideInfo *accountOverrideInfo;
@property (copy) CKAccountOverrideInfo *accountInfoOverride;
@property unsigned long long mmcsEncryptionSupport;
@property (copy) NSString *encryptionServiceName;
@property char bypassPCSEncryption;
@property char enforceNamedOperationGroups;
@property char forceEnableReadOnlyManatee;
@property char useClearAssetEncryption;
@property char accountInfoCacheIsDisabled;
@property char useAnonymousToServerShareParticipants;
@property char encryptMergeableValueMetadata;
@property (copy) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (copy) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (copy) NSString *applicationBundleIdentifierOverrideForPushTopicGeneration;
@property (copy) NSString *applicationBundleIdentifierOverrideForTCC;
@property char maintainRecordUploadOrder;
@property char addDatabaseScopeToZoneIDs;
@property char fetchChangesForMergeableValues;
@property char prefersHiddenAllowedSharingOptionsUI;
@property char acceptServerSignedRecords;
@property (copy) NSArray *supportedDeviceCapabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)CKShortDescriptionRedact:(char)a0;
- (void)ck_bindInStatement:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithSqliteRepresentation:(id)a0;
- (void)setApplicationBundleIdentifierOverride:(id)a0;
- (void)setUseMMCSEncryptionV2:(char)a0;
- (id)sqliteRepresentation;

@end
