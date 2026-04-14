@interface ASASliderControl : ASAControl

@property (nonatomic) unsigned int value;
@property (readonly, nonatomic) struct _ASASliderRange { unsigned int x0; unsigned int x1; } range;

- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (void)setValue:(unsigned int)a0;
- (unsigned int)value;
- (struct _ASASliderRange { unsigned int x0; unsigned int x1; })range;
- (id)coreAudioClassName;

@end
