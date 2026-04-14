@class NSMutableArray;

@interface SFTokenHIPluginSupport : NSObject {
    NSMutableArray *mInstances;
}

- (id)init;
- (void)dealloc;
- (id)allBundles:(id)a0;
- (id)instanceOfClassNamed:(id)a0;
- (void)loadAllPlugins;

@end
