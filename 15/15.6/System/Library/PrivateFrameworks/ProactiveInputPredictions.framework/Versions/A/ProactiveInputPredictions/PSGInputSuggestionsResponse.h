@class NSArray, PSGInputSuggestionsExplanationSet;

@interface PSGInputSuggestionsResponse : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double triggeringTimeMillis;
@property (nonatomic) int triggeredItemsCount;
@property (nonatomic) double servingTimeMillis;
@property (readonly, nonatomic) NSArray *responseItems;
@property (readonly, nonatomic) PSGInputSuggestionsExplanationSet *explanationSet;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToResponse:(id)a0;
- (id)initWithResponseItems:(id)a0 explanationSet:(id)a1;

@end
