@class NSDictionary;

@interface TVRCButton : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long buttonType;
@property (readonly, nonatomic, getter=isEnabled) char enabled;
@property (readonly, nonatomic) char hasTapAction;
@property (readonly, copy, nonatomic) NSDictionary *properties;

+ (char)_isMediaButtonEvent:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setEnabled:(char)a0;
- (id)_initWithButtonType:(long long)a0;
- (id)_initWithButtonType:(long long)a0 hasTapAction:(char)a1 properties:(id)a2;
- (char)isEqualToButton:(id)a0;

@end
