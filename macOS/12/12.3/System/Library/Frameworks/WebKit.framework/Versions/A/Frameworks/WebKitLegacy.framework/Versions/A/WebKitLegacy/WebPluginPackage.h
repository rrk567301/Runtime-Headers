@class NSBundle;

@interface WebPluginPackage : WebBasePluginPackage {
    NSBundle *nsBundle;
}

- (void)dealloc;
- (BOOL)load;
- (id)initWithPath:(id)a0;
- (id)bundle;
- (Class)viewFactory;

@end
