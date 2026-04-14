@class NSIndexSet, MADRichLabelClassificationResult;

@interface MADRichLabelClassificationRequest : MADRequest

@property (retain, nonatomic) NSIndexSet *domains;
@property (readonly, nonatomic) MADRichLabelClassificationResult *richLabelResult;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)targetResolution;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
