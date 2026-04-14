@class NSString;

@interface TUIInputModeAccessory : TUICursorAccessory <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *inputMode;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithInputMode:(id)a0;
- (id)additionalComponents;

@end
