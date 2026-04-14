@interface ASAStereoPanControl : ASAControl

@property (nonatomic) float value;
@property (readonly, nonatomic) unsigned int leftPanChannel;
@property (readonly, nonatomic) unsigned int rightPanChannel;

- (float)value;
- (void)setValue:(float)a0;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (unsigned int)leftPanChannel;
- (unsigned int)rightPanChannel;
- (id)coreAudioClassName;
- (unsigned int)getPanChannel:(BOOL)a0;

@end
