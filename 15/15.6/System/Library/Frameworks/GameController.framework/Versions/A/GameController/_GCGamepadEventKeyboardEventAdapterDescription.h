@class NSString, _GCGamepadEventKeyboardEventAdapterConfig, _GCGamepadEventKeyboardEventAdapter;
@protocol _GCKeyboardEventSourceDescription;

@interface _GCGamepadEventKeyboardEventAdapterDescription : NSObject <_GCGamepadEventSourceDescription> {
    _GCGamepadEventKeyboardEventAdapterConfig *_config;
    id<_GCKeyboardEventSourceDescription> _sourceDescription;
    _GCGamepadEventKeyboardEventAdapter *_materializedObject;
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
- (id)initWithConfiguration:(id)a0 source:(id)a1;
- (id)materializeWithContext:(id)a0;

@end
