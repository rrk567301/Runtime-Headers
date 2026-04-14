@class AceObject, NSString, AFAnalyticsTurnBasedInstrumentationContext;
@protocol SiriUIAceObjectViewControllerDelegate;

@interface SiriUIAceObjectViewController : NSViewController <SiriUIViewController>

@property (retain, nonatomic) AFAnalyticsTurnBasedInstrumentationContext *instrumentationTurnContext;
@property (retain, nonatomic) AceObject *aceObject;
@property (readonly, nonatomic, getter=isVirgin) BOOL virgin;
@property (weak, nonatomic) id<SiriUIAceObjectViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)_privateDelegate;
- (double)desiredHeight;
- (void)siriWillActivateFromSource:(long long)a0;
- (void)siriDidDeactivate;
- (double)_insertionAnimatedZPosition;
- (void)wasAddedToTranscript;
- (void)_setVirgin:(BOOL)a0;
- (void)_aceObjectViewControllerWillBeRemoved;
- (BOOL)removedAfterDialogProgresses;
- (long long)_pinAnimationType;
- (long long)_insertionAnimation;
- (long long)_replacementAnimation;

@end
