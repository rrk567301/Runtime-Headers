@class NSString, NSDictionary, NSURL;

@interface IASBootTimeInstallableItem : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (getter=isTemplateMigrationItem) char templateMigrationItem;
@property (getter=isJumpStartItem) char jumpStartItem;
@property (copy) NSString *interfaceType;
@property (copy) NSDictionary *evaluatorMetaInfo;
@property (copy) NSURL *productURL;
@property (copy) NSString *clientIdentifier;
@property char cleanupPackageOnDequeue;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProductAtURL:(id)a0 error:(id *)a1;
- (char)isEqualToInstallableItem:(id)a0;

@end
