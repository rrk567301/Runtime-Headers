@interface AXMAssetMetadataNode : AXMSourceNode

+ (id)title;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isSupported;

- (void)triggerWithAssetURL:(id)a0 cacheKey:(id)a1 resultHandler:(id /* block */)a2;

@end
