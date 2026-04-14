@class NSString, _GCDevicePhysicalInputGroup;
@protocol NSSecureCoding, NSCopying, NSObject, GCDevice;

@interface _GCDevicePhysicalInputComponent : NSObject <_GCGamepadEventSink, _GCCollectionEventSink, _GCDevicePhysicalInputGroupDataSource, GCDeviceComponent> {
    _GCDevicePhysicalInputGroup *_defaultPhysicalInputGroup;
    id _gamepadEventObservation;
    id _collectionEventObservation;
    id<GCDevice> _device;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;

- (void)setDevice:(id)a0;
- (id)init;
- (void)setDispatchQueue:(id)a0;
- (id)capture;
- (void).cxx_destruct;
- (void)handleCollectionEvent:(id)a0;
- (void)handleGamepadEvent:(id)a0;
- (id)initWithIdentifier:(id)a0 defaultPhysicalInput:(id)a1;
- (id)initWithIdentifier:(id)a0 physicalInputs:(id)a1;
- (void)physicalInputGroupPoll:(id)a0 forLatest:(BOOL)a1;
- (void)physicalInputGroupPreferredTransactionQueueDepthDidChange:(id)a0;
- (void)physicalInputGroupQueueDidChange:(id)a0;
- (void)setCollectionEventSource:(id)a0;
- (void)setGamepadEventSource:(id)a0;

@end
