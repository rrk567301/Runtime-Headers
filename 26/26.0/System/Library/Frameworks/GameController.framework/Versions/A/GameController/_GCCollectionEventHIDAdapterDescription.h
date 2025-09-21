@class _GCCControllerHIDServiceInfoDescription, NSString, _GCCollectionEventHIDAdapter, _GCHIDEventParser;
@protocol _GCHIDEventSourceDescription;

@interface _GCCollectionEventHIDAdapterDescription : NSObject <_GCCollectionEventSourceDescription> {
    _GCHIDEventParser *_parser;
    id<_GCHIDEventSourceDescription> _sourceDescription;
    _GCCControllerHIDServiceInfoDescription *_serviceDescription;
    _GCCollectionEventHIDAdapter *_materializedObject;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootParser:(id)a0 source:(id)a1 service:(id)a2;
- (id)materializeWithContext:(id)a0;

@end
