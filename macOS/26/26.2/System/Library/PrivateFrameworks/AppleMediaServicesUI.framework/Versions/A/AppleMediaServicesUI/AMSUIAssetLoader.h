@interface AMSUIAssetLoader : NSObject {
    void /* unknown type, empty encoding */ urlSession;
}

@property (class, nonatomic, readonly) AMSUIAssetLoader *sharedLoader;

- (void).cxx_destruct;
- (id)init;
- (id)fetchWithAssetURL:(id)a0;

@end
