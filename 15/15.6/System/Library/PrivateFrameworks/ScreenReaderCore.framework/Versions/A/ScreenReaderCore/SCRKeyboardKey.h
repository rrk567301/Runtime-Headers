@class NSString, NSMutableSet;

@interface SCRKeyboardKey : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) NSMutableSet *keysWithPressCountGreaterThanOne;
@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned short keyCode;
@property (nonatomic) char didSetKeyCode;
@property (nonatomic) unsigned int eventFlags;
@property (copy, nonatomic) NSString *characters;
@property (copy, nonatomic) NSString *rawCharacters;
@property (nonatomic) unsigned long long pressCount;
@property (nonatomic) char shifted;
@property (nonatomic) char commanded;
@property (nonatomic) char fned;
@property (nonatomic) char function;

+ (void)initializePressCountsCache;
+ (char)isEqualIgnoringCount:(id)a0 object2:(id)a1 ignorePressCount:(char)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)modifierMask;
- (void)_initializeFunctionSet;
- (id)_keyboardPunctuationToLowercaseMapping;
- (id)charactersWithPunctuationConvertedToLowercaseForm;
- (id)exportAsPrefsDictionary;
- (id)initWithCharacters:(const unsigned short *)a0 length:(unsigned long long)a1 keyCode:(unsigned long long)a2 eventFlags:(unsigned int)a3 isShifted:(char)a4 isCommanded:(char)a5 isFned:(char)a6 pressCount:(unsigned long long)a7;
- (id)initWithFunctionCharacters:(const unsigned short *)a0 length:(unsigned long long)a1 isShifted:(char)a2 isCommanded:(char)a3 isFned:(char)a4 pressCount:(long long)a5;
- (id)initWithPrefsDictionary:(id)a0;
- (id)initWithRegularString:(id)a0 isShifted:(char)a1 isCommanded:(char)a2 isFned:(char)a3 pressCount:(long long)a4;
- (char)isEqualIgnoringCount:(id)a0;
- (long long)modifierMaskForGuide;
- (void)registerPressCount:(unsigned long long)a0;
- (void)setKeyCode:(short)a0 eventFlags:(unsigned int)a1;

@end
