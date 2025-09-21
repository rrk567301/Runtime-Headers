@class IMNetworkConnectionMonitor, NSObject;
@protocol OS_dispatch_queue;

@interface IDSOffGridConnectionMonitor : NSObject <IMConnectionMonitorDelegate>

@property (retain, nonatomic) IMNetworkConnectionMonitor *networkConnectionMonitor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) char isConnectionSuitableForIMLOverStewie;
@property (readonly, nonatomic) char isIMLAvailable;
@property (readonly, nonatomic) char isIMLActive;
@property (readonly, nonatomic) char isDeviceOnline;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)connectionMonitorDidUpdate:(id)a0;

@end
