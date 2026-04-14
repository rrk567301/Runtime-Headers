@class NSUUID, HMDDevice, NSString;
@protocol HMDDeviceControllerDelegate;

@interface HMDDeviceController : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HMDDevice *_device;
}

@property (weak) id<HMDDeviceControllerDelegate> delegate;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMDDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)logCategory;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (id)initWithDevice:(id)a0 accountRegistry:(id)a1;
- (void)updateWithDevice:(id)a0 completionHandler:(id /* block */)a1;

@end
