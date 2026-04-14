@class IMNetworkConnectionMonitor, NSObject;
@protocol OS_dispatch_queue;

@interface IDSOffGridConnectionMonitor : NSObject <IMConnectionMonitorDelegate>

@property (retain, nonatomic) IMNetworkConnectionMonitor *networkConnectionMonitor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BOOL isConnectionSuitableForIMLOverStewie;
@property (readonly, nonatomic) BOOL isIMLAvailable;
@property (readonly, nonatomic) BOOL isIMLActive;
@property (readonly, nonatomic) BOOL isDeviceOnline;

+ (id)sharedInstance;

- (id)init;
- (id)description;
- (void)connectionMonitorDidUpdate:(id)a0;
- (void).cxx_destruct;

@end
