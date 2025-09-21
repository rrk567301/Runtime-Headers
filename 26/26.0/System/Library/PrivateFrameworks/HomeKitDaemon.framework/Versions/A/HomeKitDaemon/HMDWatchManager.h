@class NSArray, NSString, NSObject;
@protocol HMDIDSService, OS_dispatch_queue;

@interface HMDWatchManager : HMFObject <HMFLogging, HMDIDSServiceDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) id<HMDIDSService> service;
@property (readonly, copy) NSArray *watches;
@property (readonly, copy) NSArray *connectedWatches;
@property (readonly, getter=isPairedWithWatch) BOOL pairedWithWatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)sharedManager;
+ (BOOL)isCompatibleWatchDevice:(id)a0;
+ (id)shortDescription;

- (void)service:(id)a0 connectedDevicesChanged:(id)a1;
- (id)connectedWatchFromDeviceID:(id)a0;
- (id)attributeDescriptions;
- (id)init;
- (void)__initializeConnectedDevices;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (void).cxx_destruct;

@end
