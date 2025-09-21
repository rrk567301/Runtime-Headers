@class NSString, _GCGamepadEventFusionConfig, NSArray, _GCGamepadEventFusion;

@interface _GCGamepadEventFusionDescription : NSObject <_GCGamepadEventSourceDescription> {
    _GCGamepadEventFusionConfig *_config;
    NSArray *_sourcesDescription;
    _GCGamepadEventFusion *_materializedObject;
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
- (id)initWithConfiguration:(id)a0 sources:(id)a1;
- (id)materializeWithContext:(id)a0;

@end
