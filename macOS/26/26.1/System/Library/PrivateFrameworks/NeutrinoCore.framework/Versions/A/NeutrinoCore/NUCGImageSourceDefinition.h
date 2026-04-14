@interface NUCGImageSourceDefinition : NUSingleSourceDefinition

@property (readonly) struct CGImageSource { } *imageSource;

- (void)dealloc;
- (long long)mediaType;
- (id)init;
- (id)initWithCGImageSource:(struct CGImageSource { } *)a0;
- (id)generateSourceNodeWithIdentifier:(id)a0 error:(out id *)a1;

@end
