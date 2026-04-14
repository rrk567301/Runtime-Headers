@class NSError;

@interface RUIInternalResourceLoader : NSObject {
    void /* unknown type, empty encoding */ resources;
}

@property (class, nonatomic, readonly) RUIInternalResourceLoader *shared;

- (id)init;
- (void).cxx_destruct;
- (void)loadWithCompletionHandler:(void (^)(NSError *))a0;

@end
