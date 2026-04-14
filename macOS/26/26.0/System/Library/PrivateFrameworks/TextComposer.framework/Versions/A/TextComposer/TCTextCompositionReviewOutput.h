@class NSArray, NSDictionary;

@interface TCTextCompositionReviewOutput : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *results;
@property (readonly, copy) NSDictionary *options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_textCheckingResultsFromData:(id)a0;
- (id)initWithResults:(id)a0 options:(id)a1;

@end
