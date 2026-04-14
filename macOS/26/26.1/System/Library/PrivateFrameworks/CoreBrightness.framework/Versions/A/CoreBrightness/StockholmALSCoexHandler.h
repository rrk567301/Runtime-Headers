@class NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface StockholmALSCoexHandler : NSObject {
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
}

@property BOOL dropALSColorSamples;

- (void)start;
- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)reset;
- (void)stop;
- (void)registerForNFCNotifications;
- (void)unregisterFromNFCNotifications;

@end
