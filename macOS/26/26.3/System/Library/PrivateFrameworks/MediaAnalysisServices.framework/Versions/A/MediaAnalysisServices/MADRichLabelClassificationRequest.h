@class NSIndexSet, MADRichLabelClassificationResult;

@interface MADRichLabelClassificationRequest : MADRequest

@property (retain, nonatomic) NSIndexSet *domains;
@property (readonly, nonatomic) MADRichLabelClassificationResult *richLabelResult;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)targetResolution;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
