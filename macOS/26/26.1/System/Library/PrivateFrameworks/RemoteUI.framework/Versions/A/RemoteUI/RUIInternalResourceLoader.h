@class NSError;

@interface RUIInternalResourceLoader : NSObject {
    void /* unknown type, empty encoding */ _resources;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

@property (class, nonatomic, readonly) RUIInternalResourceLoader *shared;

- (void).cxx_destruct;
- (id)init;
- (void)loadWithCompletionHandler:(void (^)(NSError *))a0;

@end
