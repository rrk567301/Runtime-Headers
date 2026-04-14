@class NSObject, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface VCQoSMonitorManager : VCObject {
    NSMutableArray *_monitors;
    NSMutableDictionary *_sources;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    long long _reportingInterval;
}

@property (readonly, nonatomic) NSMutableArray *moitors;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)registerBlocksForService;
- (void)deregisterBlocksForService;
- (void)registerQoSReportingSourceForToken:(long long)a0;
- (void)unregisterQoSReportingSourceForToken:(long long)a0;
- (void)updateQoSReport:(id)a0 toClientsWithToken:(long long)a1;
- (BOOL)doesQoSSourceExistForStreamToken:(id)a0;

@end
