@class OKProducerPlugin;

@interface OKProducerContent : OKProducerBundle

@property (nonatomic) OKProducerPlugin *plugin;

- (void)dealloc;
- (id)initWithURL:(id)a0;
- (char)isLoaded;

@end
