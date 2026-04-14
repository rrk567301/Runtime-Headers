@class SAUISnippet, NSString, AceObject, AFAnalyticsTurnBasedInstrumentationContext;
@protocol SiriUIAceObjectViewControllerDelegate;

@interface SiriUIBaseSnippetViewController : NSViewController <SiriUIViewController>

@property (retain, nonatomic) AFAnalyticsTurnBasedInstrumentationContext *instrumentationTurnContext;
@property (retain, nonatomic) SAUISnippet *snippet;
@property (weak, nonatomic) id<SiriUIAceObjectViewControllerDelegate> delegate;
@property (retain, nonatomic) AceObject *aceObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)desiredHeight;
- (void)siriWillActivateFromSource:(long long)a0;
- (void)siriDidDeactivate;
- (void)wasAddedToTranscript;

@end
