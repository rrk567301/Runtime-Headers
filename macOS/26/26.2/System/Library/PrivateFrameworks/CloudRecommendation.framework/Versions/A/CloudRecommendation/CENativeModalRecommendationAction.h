@interface CENativeModalRecommendationAction : CERecommendationAction

@property (retain, nonatomic) Class detailControllerClass;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)a0 title:(id)a1 detailControllerClass:(Class)a2;

@end
