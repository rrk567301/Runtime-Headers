@interface NSLayoutXAxisAnchor : NSLayoutAnchor

- (id)anchorByOffsettingWithConstant:(double)a0;
- (long long)_directionAbstraction;
- (id)anchorByOffsettingWithDimension:(id)a0;
- (id)anchorByOffsettingWithDimension:(id)a0 multiplier:(double)a1 constant:(double)a2;
- (id)anchorWithOffsetToAnchor:(id)a0;
- (id)constraintEqualToSystemSpacingAfterAnchor:(id)a0 multiplier:(double)a1;
- (id)constraintLessThanOrEqualToSystemSpacingAfterAnchor:(id)a0 multiplier:(double)a1;
- (char)_validateOtherXAxisAnchorDirectionAbstraction:(long long)a0;
- (id)constraintGreaterThanOrEqualToSystemSpacingAfterAnchor:(id)a0 multiplier:(double)a1;
- (id)distanceTo:(id)a0;
- (char)isCompatibleWithAnchor:(id)a0;
- (id)offsetBy:(double)a0;
- (id)offsetByDimension:(id)a0;
- (id)offsetByDimension:(id)a0 times:(double)a1 plus:(double)a2;
- (id)offsetTo:(id)a0;
- (char)validateOtherAttribute:(long long)a0;

@end
