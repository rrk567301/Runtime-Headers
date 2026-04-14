@class NSArray;

@interface MADImagePersonalizationGatingResult : MADResult

@property (readonly, nonatomic) NSArray *faces;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFaces:(id)a0;

@end
