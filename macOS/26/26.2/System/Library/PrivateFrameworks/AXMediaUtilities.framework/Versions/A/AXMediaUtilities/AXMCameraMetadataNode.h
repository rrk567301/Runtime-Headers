@interface AXMCameraMetadataNode : AXMSourceNode

+ (id)title;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isSupported;

- (void)triggerWithCameraType:(long long)a0 cacheKey:(id)a1 resultHandler:(id /* block */)a2;

@end
