@class NSMutableArray;

@interface SFTokenHIPluginSupport : NSObject {
    NSMutableArray *mInstances;
}

- (void)dealloc;
- (id)init;
- (id)instanceOfClassNamed:(id)a0;
- (void)loadAllPlugins;
- (id)allBundles:(id)a0;

@end
