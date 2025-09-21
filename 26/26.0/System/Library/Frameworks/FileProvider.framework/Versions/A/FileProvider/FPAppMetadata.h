@class NSString, NSURL;

@interface FPAppMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL useDefaultProviderDomainID;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *providerDomainID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSURL *documentsURL;
@property (readonly, nonatomic) BOOL isManaged;

+ (id)_localizedCustomDisplayNameForAppProxy:(id)a0;
+ (id)_entitledUbiquityContainerIDForAppProxy:(id)a0;
+ (BOOL)_isContainerIDPermitted:(id)a0;
+ (id)findBundleIDForCurrentPlatformInSet:(id)a0;
+ (id)_entitledCloudDocsContainerIDForAppProxy:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAppProxy:(id)a0 providerDomainID:(id)a1;
- (id)initWithBundleID:(id)a0 displayName:(id)a1 documentsURL:(id)a2 providerDomainID:(id)a3 isManaged:(BOOL)a4;

@end
