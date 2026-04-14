@interface MSRHDRProcessingT5 : MSRHDRProcessingT4

- (id)init;
- (void)getDegammaLutInput:(float *)a0;
- (unsigned long long)getDegammaLutSize;
- (unsigned int)getHorizontalScalingTablePhaseNumber;
- (unsigned int)getHorizontalScalingTableTapNumber;
- (void)getRegammaLutInput:(float *)a0;
- (unsigned long long)getRegammaLutSize;
- (unsigned int)getVerticalScalingTablePhaseNumber;
- (unsigned int)getVerticalScalingTableTapNumber;
- (void)setDegammaBuffer:(long long)a0 Buffer:(float *)a1 TableSize:(unsigned long long)a2 LutInput:(float *)a3 Type:(int)a4 scalerForSrgbBeyondMax:(float)a5;
- (void)setupHardwareConfigUnit;

@end
