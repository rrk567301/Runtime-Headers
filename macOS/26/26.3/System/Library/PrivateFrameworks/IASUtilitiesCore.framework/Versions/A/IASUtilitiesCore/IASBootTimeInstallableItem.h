@class NSString, NSDictionary, NSURL;

@interface IASBootTimeInstallableItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (getter=isTemplateMigrationItem) BOOL templateMigrationItem;
@property (getter=isJumpStartItem) BOOL jumpStartItem;
@property (copy) NSString *interfaceType;
@property (copy) NSDictionary *evaluatorMetaInfo;
@property (copy) NSURL *productURL;
@property (copy) NSString *clientIdentifier;
@property BOOL cleanupPackageOnDequeue;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProductAtURL:(id)a0 error:(id *)a1;
- (BOOL)isEqualToInstallableItem:(id)a0;

@end
