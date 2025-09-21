@class NSString;

@interface TUIInputModeAccessory : TUICursorAccessory <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *inputMode;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInputMode:(id)a0;
- (id)additionalComponents;

@end
