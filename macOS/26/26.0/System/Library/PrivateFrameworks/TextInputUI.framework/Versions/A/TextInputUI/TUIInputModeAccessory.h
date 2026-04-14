@class NSString;

@interface TUIInputModeAccessory : TUICursorAccessory <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *inputMode;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithInputMode:(id)a0;
- (id)additionalComponents;

@end
