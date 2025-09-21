@class NSUUID, AceObject, NSString;
@protocol SiriUIAceObjectViewControllerDelegate;

@interface SiriUIAceObjectViewController : NSViewController <SiriSharedUIViewControlling, SiriUIViewController>

@property (retain, nonatomic) NSUUID *instrumentationTurnIdentifier;
@property (retain, nonatomic) AceObject *aceObject;
@property (readonly, nonatomic, getter=isVirgin) char virgin;
@property (weak, nonatomic) id<SiriUIAceObjectViewControllerDelegate> delegate;
@property (nonatomic, getter=isUtteranceUserInteractionEnabled) char utteranceUserInteractionEnabled;
@property (nonatomic) char isInAmbient;
@property (nonatomic) char isInAmbientInteractivity;
@property (nonatomic) char isPresentedWithSmartDialogText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (id)_privateDelegate;
- (double)desiredHeight;
- (void)_aceObjectViewControllerWillBeRemoved;
- (double)_insertionAnimatedZPosition;
- (long long)_insertionAnimation;
- (long long)_pinAnimationType;
- (long long)_replacementAnimation;
- (void)_setVirgin:(char)a0;
- (char)removedAfterDialogProgresses;
- (void)siriDidDeactivate;
- (void)wasAddedToTranscript;

@end
