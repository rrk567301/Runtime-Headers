@class NSString, CKAccountOverrideInfo, CKPersona;

@interface CloudKit.CloudCoreContainerOptions : CKContainerOptions

@property (nonatomic, readonly) Class classForCoder;
@property (nonatomic, copy) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (nonatomic, copy) NSString *applicationBundleIdentifierOverrideForPushTopicGeneration;
@property (nonatomic, copy) NSString *applicationBundleIdentifierOverrideForTCC;
@property (nonatomic, copy) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (nonatomic, retain) CKAccountOverrideInfo *accountOverrideInfo;
@property (nonatomic, retain) CKPersona *persona;
@property (nonatomic) BOOL isServiceManatee;
@property (nonatomic, copy) NSString *encryptionServiceName;
@property (nonatomic) BOOL bypassPCSEncryption;

- (id)initWithSqliteRepresentation:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
