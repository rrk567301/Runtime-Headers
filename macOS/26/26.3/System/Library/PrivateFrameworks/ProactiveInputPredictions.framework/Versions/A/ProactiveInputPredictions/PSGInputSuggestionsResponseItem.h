@class PSGStructuredInfoSuggestion, PSGTextualResponseSuggestion;

@interface PSGInputSuggestionsResponseItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PSGTextualResponseSuggestion *textualResponseSuggestion;
@property (readonly, nonatomic) PSGStructuredInfoSuggestion *structuredInfoSuggestion;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)predictedValue;
- (BOOL)isEqualToItem:(id)a0;
- (id)initWithTextualResponseSuggestion:(id)a0 structuredInfoSuggestion:(id)a1;

@end
