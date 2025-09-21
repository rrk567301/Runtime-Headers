@class NSString, _WKAutomationSessionConfiguration;
@protocol _WKAutomationSessionDelegate;

@interface _WKAutomationSession : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebAutomationSession> { struct type { unsigned char __lx[360]; } data; } _session;
    struct RetainPtr<_WKAutomationSessionConfiguration> { void *m_ptr; } _configuration;
    struct WeakObjCPtr<id<_WKAutomationSessionDelegate>> { id m_weakReference; } _delegate;
}

@property (copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, copy, nonatomic) _WKAutomationSessionConfiguration *configuration;
@property (weak, nonatomic) id<_WKAutomationSessionDelegate> delegate;
@property (readonly, nonatomic, getter=isPaired) char paired;
@property (readonly, nonatomic, getter=isPendingTermination) char pendingTermination;
@property (readonly, nonatomic, getter=isSimulatingUserInteraction) char simulatingUserInteraction;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)terminate;
- (id)initWithConfiguration:(id)a0;
- (void)markEventAsSynthesizedForAutomation:(id)a0;
- (char)wasEventSynthesizedForAutomation:(id)a0;

@end
