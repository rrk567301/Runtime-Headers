@class NSString, NSDictionary;

@interface BAAppStoreGrantDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) NSDictionary *appStoreMetadata;
@property (nonatomic) unsigned long long cellularPolicy;

+ (id)new;
+ (id)descriptorWithAppBundleIdentifier:(id)a0 appStoreMetadata:(id)a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
