@class NSSet;

@interface MADSceneClassificationResult : MADResult

@property (readonly, nonatomic) NSSet *classifications;

+ (BOOL)supportsSecureCoding;
+ (id)resultWithClassifications:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithClassifications:(id)a0;

@end
