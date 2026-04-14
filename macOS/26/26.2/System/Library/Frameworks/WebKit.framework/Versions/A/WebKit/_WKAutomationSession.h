@class NSString, _WKAutomationSessionConfiguration;
@protocol _WKAutomationSessionDelegate;

@interface _WKAutomationSession : NSObject <WKObject> {
    struct AlignedStorage<WebKit::WebAutomationSession, 8UL> { struct Storage { unsigned char data[392]; } m_storage; } _session;
    struct RetainPtr<_WKAutomationSessionConfiguration> { _WKAutomationSessionConfiguration *m_ptr; } _configuration;
    struct WeakObjCPtr<id<_WKAutomationSessionDelegate>> { id m_weakReference; } _delegate;
}

@property (copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, copy, nonatomic) _WKAutomationSessionConfiguration *configuration;
@property (weak, nonatomic) id<_WKAutomationSessionDelegate> delegate;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (readonly, nonatomic, getter=isPendingTermination) BOOL pendingTermination;
@property (readonly, nonatomic, getter=isSimulatingUserInteraction) BOOL simulatingUserInteraction;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)terminate;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void)dealloc;
- (void)markEventAsSynthesizedForAutomation:(id)a0;
- (BOOL)wasEventSynthesizedForAutomation:(id)a0;

@end
