@class NSData, NSString;

@interface LNUIPluginModel : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *pluginModelData;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPluginModelData:(id)a0 bundleIdentifier:(id)a1;

@end
