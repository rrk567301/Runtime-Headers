@class NSArray, NSString, NSNumber;

@interface AXSSKeyChord : NSObject <NSSecureCoding, NSCopying> {
    NSNumber *_cachedIsFunctionKey;
    NSNumber *_cachedContainsModifier;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *keys;
@property (readonly, nonatomic) NSString *displayValue;
@property (readonly, nonatomic) char isFunctionKeyChord;
@property (readonly, nonatomic) char containsModifier;
@property (readonly, nonatomic) char isTextInputChord;
@property (readonly, nonatomic) char isTextInputTabChord;
@property (readonly, nonatomic) char isArrowKeyChord;
@property (readonly, nonatomic) char isNull;

+ (id)keyChordWithKeys:(id)a0;
+ (id)keyChordWithString:(id)a0;
+ (id)keyFromKeyCode:(unsigned long long)a0 unicodeCharacter:(id)a1;
+ (id)nullKeyChord;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_normalizeKeys:(id)a0;
- (id)_displayValueWithSortedModifiers:(id)a0 isUSKeyboard:(char)a1;
- (id)_initWithKeys:(id)a0;
- (id)displayValueWithStyle:(long long)a0;
- (id)displayValueWithStyle:(long long)a0 isUSKeyboard:(char)a1;
- (char)isEqualToKeyChord:(id)a0;

@end
