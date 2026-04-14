@class OKProducerPlugin;

@interface OKProducerContent : OKProducerBundle

@property (nonatomic) OKProducerPlugin *plugin;

- (void)dealloc;
- (BOOL)isLoaded;
- (id)initWithURL:(id)a0;

@end
