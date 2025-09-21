@interface AXMCameraMetadataNode : AXMSourceNode

+ (char)supportsSecureCoding;
+ (id)title;
+ (char)isSupported;

- (void)triggerWithCameraType:(long long)a0 cacheKey:(id)a1 resultHandler:(id /* block */)a2;

@end
