@class NSString;

@interface SCROBrailleKeyboardKey : SCROBrailleKey <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *keyString;
@property (nonatomic) unsigned int modifiers;
@property (nonatomic) unsigned int keyCode;
@property (nonatomic) unsigned int virtualKeyCode;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
