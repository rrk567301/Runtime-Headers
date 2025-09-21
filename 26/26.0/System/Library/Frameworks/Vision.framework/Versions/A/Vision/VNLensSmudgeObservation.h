@interface VNLensSmudgeObservation : VNObservation

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (id)observationForOriginatingRequestSpecifier:(id)a0 confidence:(float)a1 error:(id *)a2;

- (id)_initWithOriginatingRequestSpecifier:(id)a0 confidence:(float)a1;

@end
