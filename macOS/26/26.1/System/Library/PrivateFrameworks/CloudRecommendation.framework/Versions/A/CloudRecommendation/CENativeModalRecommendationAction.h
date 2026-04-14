@interface CENativeModalRecommendationAction : CERecommendationAction

@property (retain, nonatomic) Class detailControllerClass;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1 detailControllerClass:(Class)a2;

@end
