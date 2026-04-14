@class NSString;

@interface NSVBKeyboardEventSpecification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *charactersIgnoringModifiers;
@property (readonly) unsigned long long modifierFlags;
@property (readonly) int modifierFlagsCriterion;
@property (readonly) long long keyCode;

+ (BOOL)event:(struct __CGEvent { } *)a0 matchesAnySpecification:(id)a1;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithCharactersIgnoringModifiers:(id)a0;
- (id)initWithCharactersIgnoringModifiers:(id)a0 modifierFlags:(unsigned long long)a1;
- (id)initWithCharactersIgnoringModifiers:(id)a0 modifierFlags:(unsigned long long)a1 modifierFlagsCriterion:(int)a2;
- (id)initWithKeyCode:(unsigned short)a0;
- (id)initWithKeyCode:(unsigned short)a0 modifierFlags:(unsigned long long)a1;
- (id)initWithKeyCode:(unsigned short)a0 modifierFlags:(unsigned long long)a1 modifierFlagsCriterion:(int)a2;

@end
