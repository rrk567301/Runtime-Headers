@class NSISVariable;

@interface NSErrorVariableConstraint : NSLayoutConstraint {
    NSISVariable *_errorVariable;
    double _errorValue;
}

- (void)dealloc;
- (int)nsis_orientationHintForVariable:(id)a0;
- (char)_lowerIntoExpression:(id)a0 reportingConstantIsRounded:(char *)a1;
- (id)constrainedConstraint;
- (id)initWithVariable:(id)a0 value:(double)a1;

@end
