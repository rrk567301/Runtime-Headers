@interface ASALevelControl : ASAControl

@property (nonatomic) float scalarValue;
@property (nonatomic) float decibelValue;
@property (readonly, nonatomic) float minimumDecibelValue;
@property (readonly, nonatomic) float maximumDecibelValue;
@property (readonly, nonatomic) struct AudioValueRange { double x0; double x1; } decibelRange;

- (struct AudioValueRange { double x0; double x1; })decibelRange;
- (float)decibelValue;
- (float)scalarValue;
- (void)setScalarValue:(float)a0;
- (float)decibelFromScalar:(float)a0;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(char)a1;
- (float)maximumDecibelValue;
- (float)minimumDecibelValue;
- (float)scalarFromDecibel:(float)a0;
- (void)setDecibelValue:(float)a0;
- (id)coreAudioClassName;

@end
