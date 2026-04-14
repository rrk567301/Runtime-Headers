@class NSString, HMDHome, NSObject, HMDHAPAccessory;
@protocol OS_dispatch_queue;

@interface HMDHAPAccessoryLocalNotifyUpdateManagerDefaultSource : NSObject <HMDHAPAccessoryLocalNotifyUpdateManagerDataSource>

@property (readonly, weak) HMDHome *home;
@property (readonly, weak) HMDHAPAccessory *hmdHAPAccessory;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
