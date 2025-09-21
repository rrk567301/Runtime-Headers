@class NSString;

@interface SCROBrailleKeyboardKey : SCROBrailleKey <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *keyString;
@property (nonatomic) unsigned int modifiers;
@property (nonatomic) unsigned int keyCode;
@property (nonatomic) unsigned int virtualKeyCode;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
