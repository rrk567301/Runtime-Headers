@class GCPhysicalInputProfile, NSSet, NSString, NSArray, _GCDevicePhysicalInputComponent, NSObject, GCRacingWheelInput;
@protocol GCDeviceSpatial, NSSecureCoding, GCRacingWheelProductInfo, NSCopying, NSObject, OS_dispatch_queue;

@interface GCRacingWheel : NSObject <GCDevice> {
    NSArray *_components;
    id<GCRacingWheelProductInfo> _info;
    _GCDevicePhysicalInputComponent *_input;
}

@property (class, readonly, nonatomic) NSSet *connectedRacingWheels;

@property (readonly) id<NSCopying, NSObject, NSSecureCoding> identifier;
@property (readonly, getter=isAcquired) BOOL acquired;
@property (readonly) GCRacingWheelInput *wheelInput;
@property (readonly, getter=isSnapshot) BOOL snapshot;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (readonly, copy, nonatomic) NSString *vendorName;
@property (readonly, nonatomic) NSString *productCategory;
@property (readonly, nonatomic) GCPhysicalInputProfile *physicalInputProfile;
@property (readonly) id<GCDeviceSpatial> spatial;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)input;
- (id)init;
- (id)capture;
- (void).cxx_destruct;
- (id)initWithComponents:(id)a0;
- (id)haptics;
- (BOOL)acquireDeviceWithError:(id *)a0;
- (id)initWithIdentifier:(id)a0 components:(id)a1;
- (void)relinquishDevice;

@end
