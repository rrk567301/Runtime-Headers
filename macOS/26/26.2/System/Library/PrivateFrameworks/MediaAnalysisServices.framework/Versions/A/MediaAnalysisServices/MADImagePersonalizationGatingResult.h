@class NSArray;

@interface MADImagePersonalizationGatingResult : MADResult

@property (readonly, nonatomic) NSArray *faces;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFaces:(id)a0;

@end
