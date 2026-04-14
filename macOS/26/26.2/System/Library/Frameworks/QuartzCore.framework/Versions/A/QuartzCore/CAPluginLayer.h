@class NSString;

@interface CAPluginLayer : CALayer

@property (copy) NSString *pluginType;
@property unsigned long long pluginId;
@property unsigned int pluginFlags;
@property (copy) NSString *pluginGravity;

+ (id)CA_attributes;
+ (id)defaultValueForKey:(id)a0;
+ (BOOL)_hasRenderLayerSubclass;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (unsigned long long)currentAPIVersion;

- (void)didChangeValueForKey:(id)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;

@end
