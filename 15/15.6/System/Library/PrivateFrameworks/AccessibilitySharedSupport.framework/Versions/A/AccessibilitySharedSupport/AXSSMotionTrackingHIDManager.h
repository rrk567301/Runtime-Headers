@class NSObject, NSArray, HIDManager, NSMutableArray;
@protocol OS_dispatch_queue, AXSSMotionTrackingHIDManagerDelegate;

@interface AXSSMotionTrackingHIDManager : NSObject

@property (nonatomic) char _monitoring;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_hidManagerDispatchQueue;
@property (retain, nonatomic) HIDManager *_hidManager;
@property (retain, nonatomic) NSMutableArray *_devices;
@property (readonly, copy, nonatomic) NSArray *devices;
@property (weak, nonatomic) id<AXSSMotionTrackingHIDManagerDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)_deviceNotification:(id)a0 added:(char)a1;

@end
