@class NSArray;

@interface MADRichLabelClassificationResult : MADResult

@property (readonly, nonatomic) NSArray *resultItems;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithResultItems:(id)a0;

@end
