@class NSString, NSURL;

@interface BAAppStoreEventDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) NSURL *appBundleURL;
@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) unsigned long long clientType;
@property (nonatomic) char userInitiated;
@property (nonatomic) char automaticInstall;

+ (id)new;
+ (id)descriptorWithAppBundleIdentifier:(id)a0 appBundleURL:(id)a1 event:(unsigned long long)a2 client:(unsigned long long)a3;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
