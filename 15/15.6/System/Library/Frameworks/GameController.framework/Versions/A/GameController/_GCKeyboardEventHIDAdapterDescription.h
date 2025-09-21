@class NSString, _GCKeyboardEventHIDAdapter, _GCCControllerHIDServiceInfoDescription;
@protocol _GCHIDEventSourceDescription;

@interface _GCKeyboardEventHIDAdapterDescription : NSObject <_GCKeyboardEventSourceDescription> {
    id<_GCHIDEventSourceDescription> _sourceDescription;
    _GCCControllerHIDServiceInfoDescription *_serviceDescription;
    _GCKeyboardEventHIDAdapter *_materializedObject;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSource:(id)a0 service:(id)a1;
- (id)materializeWithContext:(id)a0;

@end
