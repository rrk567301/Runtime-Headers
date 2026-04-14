@class NSBundle;

@interface WebPluginPackage : WebBasePluginPackage {
    NSBundle *nsBundle;
}

- (BOOL)load;
- (id)bundle;
- (id)initWithPath:(id)a0;
- (void)dealloc;
- (Class)viewFactory;

@end
