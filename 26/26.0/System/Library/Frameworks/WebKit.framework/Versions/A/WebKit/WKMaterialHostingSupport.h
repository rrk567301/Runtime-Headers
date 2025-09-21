@interface WKMaterialHostingSupport : NSObject

+ (void)updateHostingLayer:(id)a0 materialEffectType:(long long)a1 colorScheme:(long long)a2 cornerRadius:(double)a3;
+ (id)contentLayerForMaterialHostingLayer:(id)a0;
+ (id)hostingLayer;
+ (BOOL)isMaterialHostingAvailable;

- (id)init;

@end
