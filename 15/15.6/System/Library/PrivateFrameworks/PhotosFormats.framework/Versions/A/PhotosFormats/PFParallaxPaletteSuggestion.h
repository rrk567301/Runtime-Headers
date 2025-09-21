@class PFParallaxColor;

@interface PFParallaxPaletteSuggestion : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) PFParallaxColor *primaryColor;
@property (readonly, nonatomic) PFParallaxColor *secondaryColor;

+ (id)dictionaryWithPaletteSuggestion:(id)a0;
+ (id)paletteSuggestionWithDictionary:(id)a0 error:(id *)a1;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToSuggestion:(id)a0;
- (id)initWithPrimaryColor:(id)a0 secondaryColor:(id)a1;

@end
