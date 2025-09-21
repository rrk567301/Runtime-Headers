@class NSString, NSCharacterSet;

@interface XSCharacterSetFormatter : NSFormatter {
    NSString *_charactersInCustomSet;
}

@property (copy) NSString *allowedCharactersString;
@property (copy) NSCharacterSet *allowedCharacters;
@property unsigned long long maximumLength;
@property unsigned long long minimumLength;
@property char lengthIsLimitedByBytes;
@property char allowsNilValue;
@property char allowsEmptyString;

+ (id)formatter;
+ (id)formatterWithAllowedCharacters:(id)a0;
+ (id)formatterWithAllowedCharacters:(id)a0 maximumLength:(unsigned long long)a1;
+ (id)formatterWithAllowedCharacters:(id)a0 minimumLength:(unsigned long long)a1 maximumLength:(unsigned long long)a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (char)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;
- (id)stringForObjectValue:(id)a0;
- (char)_stringIsValid:(id)a0;
- (id)charactersInCustomSet;
- (id)initWithAllowedCharacters:(id)a0;
- (id)initWithAllowedCharacters:(id)a0 maximumLength:(unsigned long long)a1;
- (id)initWithAllowedCharacters:(id)a0 minimumLength:(unsigned long long)a1 maximumLength:(unsigned long long)a2;
- (void)setCharactersInCustomSet:(id)a0;

@end
