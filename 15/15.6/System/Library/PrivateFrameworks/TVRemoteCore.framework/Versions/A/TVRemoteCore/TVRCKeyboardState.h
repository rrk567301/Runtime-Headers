@class NSString, TVRCKeyboardAttributes;

@interface TVRCKeyboardState : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char isEditing;
@property (copy, nonatomic) TVRCKeyboardAttributes *attributes;
@property (copy, nonatomic) NSString *text;

+ (id)keyboardStateFromDevice:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDevice:(id)a0;

@end
