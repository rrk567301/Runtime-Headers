@class NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface StockholmALSCoexHandler : NSObject {
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
}

@property BOOL dropALSColorSamples;

- (id)initWithQueue:(id)a0;
- (void)start;
- (void)stop;
- (void)dealloc;
- (void)reset;
- (void)registerForNFCNotifications;
- (void)unregisterFromNFCNotifications;

@end
