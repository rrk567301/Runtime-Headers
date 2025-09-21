@interface UINSBridgingLayoutConstraint : NSLayoutConstraint

+ (id)constraintEquatingSceneViewWithWindow:(id)a0 attribute:(long long)a1;

- (id)description;
- (void)setConstant:(double)a0;
- (char)_lowerIntoExpression:(id)a0 reportingConstantIsRounded:(char *)a1;

@end
