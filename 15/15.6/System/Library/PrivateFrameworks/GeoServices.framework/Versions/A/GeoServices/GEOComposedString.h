@class NSArray, GEOComposedStringCondition;

@interface GEOComposedString : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_formatStrings;
    NSArray *_arguments;
    NSArray *_separators;
    NSArray *_formatStyles;
    GEOComposedString *_alternativeString;
    GEOComposedStringCondition *_alternativeStringCondition;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *arguments;
@property (readonly, nonatomic) char isPrivate;

+ (char)hasLocalizationProvider;
+ (id)localizationProvider;
+ (void)setLocalizationProvider:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)defaultOptions;
- (id)_attributedStringForStrings:(id)a0 joinedBySeparators:(id)a1;
- (id)_processAttributedString:(id)a0 withOptions:(id)a1 isFinalString:(char)a2;
- (id)_stringForStrings:(id)a0 joinedBySeparators:(id)a1;
- (id)_stringResultWithOptions:(id)a0 isFinalString:(char)a1;
- (void)_updateForFormatStylesInString:(id)a0 options:(id)a1;
- (char)_updateString:(id)a0 withArgument:(id)a1 options:(id)a2 results:(id)a3 isFinalString:(char)a4;
- (id)composedStringWithOptions:(id)a0;
- (id)initWithGeoFormattedString:(id)a0;
- (id)optionsWithArgumentHandler:(id /* block */)a0;
- (id)stringResultWithOptions:(id)a0;
- (id)stringWithDefaultOptions;
- (id)stringWithOptions:(id)a0;

@end
