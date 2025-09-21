@class NSBundle;

@interface WebPluginPackage : WebBasePluginPackage {
    NSBundle *nsBundle;
}

- (void)dealloc;
- (char)load;
- (id)bundle;
- (id)initWithPath:(id)a0;
- (Class)viewFactory;

@end
