@class MADImagePersonalizationGatingResult;

@interface MADImagePersonalizationGatingRequest : MADRequest

@property (readonly, nonatomic) MADImagePersonalizationGatingResult *gatingResult;

+ (char)supportsSecureCoding;

- (id)description;

@end
