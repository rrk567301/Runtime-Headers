@interface WMStyle : CMStyle

- (id)initWithWDStyle:(id)a0 isInTextFrame:(BOOL)a1;
- (id)cssStyleString;
- (id)initWithWMStyle:(id)a0;
- (id)initWithWDStyle:(id)a0;
- (id)initWithWDCharacterProperties:(id)a0;
- (void)addCharacterProperties:(id)a0;
- (void)ResoveInterPropertyDependencies;
- (void)cascadeWithStyle:(id)a0;

@end
