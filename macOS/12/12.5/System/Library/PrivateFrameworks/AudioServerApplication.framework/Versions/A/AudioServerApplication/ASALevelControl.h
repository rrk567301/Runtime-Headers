@interface ASALevelControl : ASAControl

@property (nonatomic) float scalarValue;
@property (nonatomic) float decibelValue;
@property (readonly, nonatomic) float minimumDecibelValue;
@property (readonly, nonatomic) float maximumDecibelValue;
@property (readonly, nonatomic) struct AudioValueRange { double x0; double x1; } decibelRange;

- (struct AudioValueRange { double x0; double x1; })decibelRange;
- (float)scalarValue;
- (float)decibelValue;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (float)decibelFromScalar:(float)a0;
- (float)scalarFromDecibel:(float)a0;
- (float)minimumDecibelValue;
- (float)maximumDecibelValue;
- (void)setDecibelValue:(float)a0;
- (void)setScalarValue:(float)a0;
- (id)coreAudioClassName;

@end
