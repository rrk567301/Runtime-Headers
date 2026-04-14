@class NSIndexSet, MADRichLabelClassificationResult;

@interface MADRichLabelClassificationRequest : MADRequest

@property (retain, nonatomic) NSIndexSet *domains;
@property (readonly, nonatomic) MADRichLabelClassificationResult *richLabelResult;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)targetResolution;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
