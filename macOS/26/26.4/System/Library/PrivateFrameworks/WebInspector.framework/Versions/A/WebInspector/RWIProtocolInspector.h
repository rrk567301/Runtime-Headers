@class RWIProtocolConfiguration;

@interface RWIProtocolInspector : NSObject {
    struct AugmentableInspectorController { void /* function */ **x0; } *_inspectorController;
    struct RetainPtr<RWIProtocolConfiguration> { RWIProtocolConfiguration *m_ptr; } _configuration;
    struct unique_ptr<RWIAugmentableInspectorControllerClient, std::default_delete<RWIAugmentableInspectorControllerClient>> { struct { struct RWIAugmentableInspectorControllerClient *__ptr_; } ; } _inspectorControllerClient;
}

@property (readonly, nonatomic) RWIProtocolConfiguration *configuration;
@property (readonly, nonatomic) BOOL connected;

- (id)initWithController:(struct AugmentableInspectorController { void /* function */ **x0; } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;
- (void)inspectorControllerDestroyed;

@end
