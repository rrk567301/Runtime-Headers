@protocol TFResolver;

@interface TFContainer : NSObject {
    void /* unknown type, empty encoding */ container;
}

@property (nonatomic, readonly) id<TFResolver> resolver;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBundleAssemblies:(id)a0 assemblies:(id)a1;

@end
