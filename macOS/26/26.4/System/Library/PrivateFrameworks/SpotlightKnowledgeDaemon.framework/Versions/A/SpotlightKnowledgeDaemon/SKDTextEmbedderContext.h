@interface SKDTextEmbedderContext : SKDModelContext

@property (readonly, nonatomic) unsigned long long maxChunkSize;

- (id)init;
- (id)initWithMaxChunkSize:(unsigned long long)a0;

@end
