@class NSBundle;

@interface WebPluginPackage : WebBasePluginPackage {
    NSBundle *nsBundle;
}

- (id)bundle;
- (BOOL)load;
- (id)initWithPath:(id)a0;
- (void)dealloc;
- (Class)viewFactory;

@end
