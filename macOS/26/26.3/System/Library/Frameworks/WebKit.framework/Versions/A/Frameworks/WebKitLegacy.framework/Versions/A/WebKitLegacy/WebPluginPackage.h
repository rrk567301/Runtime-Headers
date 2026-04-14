@class NSBundle;

@interface WebPluginPackage : WebBasePluginPackage {
    NSBundle *nsBundle;
}

- (id)bundle;
- (id)initWithPath:(id)a0;
- (BOOL)load;
- (void)dealloc;
- (Class)viewFactory;

@end
