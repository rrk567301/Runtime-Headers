@class NSArray, NSXPCConnection, NSMutableSet, NSDate, NSObject, NSSet;
@protocol STMServiceProtocol, OS_dispatch_queue, OS_dispatch_source;

@interface STMTelemetryController : NSObject <STMServiceMainReplyHandler> {
    double _telemetryDelay;
    NSObject<OS_dispatch_source> *_timer;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<STMServiceProtocol> *proxy;
@property (retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain) NSMutableSet *completionBlocks;
@property (retain) NSDate *lastReceivedDataDate;
@property (retain) NSArray *disks;
@property (retain) NSArray *opticalDisks;
@property (retain) NSArray *categories;
@property (retain) NSSet *sidebarItems;

- (id)init;
- (void).cxx_destruct;
- (void)presentError:(id)a0;
- (id)telemetry;
- (void)_resetTimer;
- (void)stopService;
- (void)sendDisksList:(id)a0;
- (void)sendOpticalDisksList:(id)a0;
- (void)sendVolumeCategories:(id)a0 forVolumeMountPath:(id)a1;
- (void)sendSidebarItems:(id)a0;
- (void)presentAlert:(id)a0 confirmationHandler:(id /* block */)a1;
- (void)getTelemetryAfterQuiesceDelay:(double)a0 completionHandler:(id /* block */)a1;
- (void)_startService;
- (void)_stopService;
- (void)_startTimerIfNeeded;
- (void)_callCompletionWithResults:(BOOL)a0;
- (void)_resetReceivedData;

@end
