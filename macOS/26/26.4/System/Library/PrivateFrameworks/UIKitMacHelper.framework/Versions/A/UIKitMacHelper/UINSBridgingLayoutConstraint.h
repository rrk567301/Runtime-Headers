@interface UINSBridgingLayoutConstraint : NSLayoutConstraint

+ (id)constraintEquatingSceneViewWithWindow:(id)a0 attribute:(long long)a1;

- (void)setConstant:(double)a0;
- (id)description;
- (BOOL)_lowerIntoExpression:(id)a0 reportingConstantIsRounded:(BOOL *)a1;

@end
