@class NSArray, NSString, NSObject;
@protocol HMDIDSService, OS_dispatch_queue;

@interface HMDWatchManager : HMFObject <HMFLogging, HMDIDSServiceDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) id<HMDIDSService> service;
@property (readonly, copy) NSArray *watches;
@property (readonly, copy) NSArray *connectedWatches;
@property (readonly, getter=isPairedWithWatch) char pairedWithWatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (id)shortDescription;
+ (id)logCategory;
+ (char)isCompatibleWatchDevice:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)service:(id)a0 connectedDevicesChanged:(id)a1;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (id)attributeDescriptions;
- (void)__initializeConnectedDevices;
- (id)connectedWatchFromDeviceID:(id)a0;

@end
