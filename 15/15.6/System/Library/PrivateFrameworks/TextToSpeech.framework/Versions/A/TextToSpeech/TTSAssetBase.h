@class NSString, NSNumber;

@interface TTSAssetBase : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSNumber *compatibilityVersion;
@property (copy, nonatomic) NSNumber *contentVersion;
@property (copy, nonatomic) NSString *masteredVersion;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
