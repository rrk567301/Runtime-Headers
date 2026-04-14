@class NSObject;
@protocol OS_dispatch_queue;

@interface CMContextConfigurationManager : NSObject {
    void *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
}

- (void)disconnect;
- (void)connect;
- (id)init;
- (void)dealloc;
- (void)writeContextConfiguration:(id)a0 withHandler:(id /* block */)a1;

@end
