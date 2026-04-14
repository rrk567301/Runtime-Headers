@class NSError;

@interface SNFileServer : NSObject {
    void /* unknown type, empty encoding */ server;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ link;
    void /* unknown type, empty encoding */ rootDirectory;
}

- (void)activateWithCompletion:(void (^)(NSError *))a0;
- (id)init;
- (id)initWithRootDirectory:(id)a0;
- (void).cxx_destruct;

@end
