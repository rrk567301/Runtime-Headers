@interface ASAControl : ASAObject

@property (readonly, nonatomic) unsigned int controlElement;
@property (readonly, nonatomic) unsigned int controlScope;

- (unsigned int)controlElement;
- (unsigned int)controlScope;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(char)a1;
- (id)coreAudioClassName;

@end
