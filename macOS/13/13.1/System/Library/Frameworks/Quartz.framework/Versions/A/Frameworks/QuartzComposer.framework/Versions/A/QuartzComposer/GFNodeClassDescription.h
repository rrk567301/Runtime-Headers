@class GFList, NSMutableDictionary;

@interface GFNodeClassDescription : NSObject {
    Class _class;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    GFList *_inputs;
    GFList *_outputs;
    BOOL _attributesInitialized;
    NSMutableDictionary *_attributes;
    NSMutableDictionary *_identifierAttributes;
    NSMutableDictionary *_userInfo;
}

- (void)dealloc;
- (id)ivarInputPorts;
- (id)ivarOutputPorts;
- (id)xmlAttributes;
- (id)initWithNodeClass:(Class)a0;
- (Class)nodeClass;
- (void)_initializeAttributes;
- (id)xmlAttributesForNodeIdentifier:(id)a0;
- (id)attributesForNodeIdentifier:(id)a0;
- (id)attributesForInputPort:(id)a0 nodeIdentifier:(id)a1;
- (id)attributesForOutputPort:(id)a0 nodeIdentifier:(id)a1;

@end
