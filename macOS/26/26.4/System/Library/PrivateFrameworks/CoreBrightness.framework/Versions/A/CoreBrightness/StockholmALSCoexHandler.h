@class NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface StockholmALSCoexHandler : NSObject {
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
}

@property BOOL dropALSColorSamples;

- (void)stop;
- (id)initWithQueue:(id)a0;
- (void)reset;
- (void)start;
- (void)dealloc;
- (void)registerForNFCNotifications;
- (void)unregisterFromNFCNotifications;

@end
