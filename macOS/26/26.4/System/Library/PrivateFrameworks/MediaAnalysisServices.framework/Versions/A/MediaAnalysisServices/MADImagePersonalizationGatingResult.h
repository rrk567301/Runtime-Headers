@class NSArray;

@interface MADImagePersonalizationGatingResult : MADResult

@property (readonly, nonatomic) NSArray *faces;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithFaces:(id)a0;

@end
