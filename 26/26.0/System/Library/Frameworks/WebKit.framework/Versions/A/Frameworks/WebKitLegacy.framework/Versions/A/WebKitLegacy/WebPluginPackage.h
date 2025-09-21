@class NSBundle;

@interface WebPluginPackage : WebBasePluginPackage {
    NSBundle *nsBundle;
}

- (id)initWithPath:(id)a0;
- (BOOL)load;
- (void)dealloc;
- (id)bundle;
- (Class)viewFactory;

@end
