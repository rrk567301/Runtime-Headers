@class LNValue, LNActionConfiguration;

@interface LNActionConfigurationSwitchCase : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNValue *value;
@property (readonly, copy, nonatomic) LNActionConfiguration *configuration;
@property (readonly, nonatomic, getter=isDefaultCase) BOOL defaultCase;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDefaultConfiguration:(id)a0;
- (id)initWithOrigin:(id)a0 configuration:(id)a1;
- (id)initWithValue:(id)a0 configuration:(id)a1;
- (id)initWithWidgetFamilies:(id)a0 configuration:(id)a1;
- (id)initWithWidgetFamily:(id)a0 configuration:(id)a1;

@end
