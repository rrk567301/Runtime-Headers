@class DGDescription, PLEditSource;

@interface DGDescriptionCompositionProvider : NSObject <DGDescriptionCompositionProvider> {
    DGDescription *_renderDescription;
    PLEditSource *_source;
}

- (void).cxx_destruct;
- (id)source;
- (long long)orientation;
- (id)composition;
- (id)renderDescription;
- (id)editDescription;
- (id)playbackSettings;
- (id)initWithRenderDescription:(id)a0 source:(id)a1;

@end
