@interface AXMAssetMetadataNode : AXMSourceNode

+ (char)supportsSecureCoding;
+ (id)title;
+ (char)isSupported;

- (void)triggerWithAssetURL:(id)a0 cacheKey:(id)a1 resultHandler:(id /* block */)a2;

@end
