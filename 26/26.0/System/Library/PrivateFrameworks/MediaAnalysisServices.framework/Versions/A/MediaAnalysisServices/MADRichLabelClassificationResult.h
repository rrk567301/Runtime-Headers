@class NSArray;

@interface MADRichLabelClassificationResult : MADResult

@property (readonly, nonatomic) NSArray *resultItems;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithResultItems:(id)a0;

@end
