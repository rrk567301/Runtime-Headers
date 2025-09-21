@interface ASASliderControl : ASAControl

@property (nonatomic) unsigned int value;
@property (readonly, nonatomic) struct _ASASliderRange { unsigned int x0; unsigned int x1; } range;

- (unsigned int)value;
- (struct _ASASliderRange { unsigned int x0; unsigned int x1; })range;
- (void)setValue:(unsigned int)a0;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(char)a1;
- (id)coreAudioClassName;

@end
