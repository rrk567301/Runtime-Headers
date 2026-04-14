@class NSObject;
@protocol OS_dispatch_queue;

@interface CMContextConfigurationManager : NSObject {
    void *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
}

- (void)disconnect;
- (void)dealloc;
- (id)init;
- (void)connect;
- (void)writeContextConfiguration:(id)a0 withHandler:(id /* block */)a1;

@end
