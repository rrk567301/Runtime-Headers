@class NSLock, NSString, AXFTextPosition, AXKElementController, AXFUIElement, AXKApplicationController, AXFTextRange, NSObject;
@protocol OS_dispatch_queue, AXKInputMarkingSessionDelegate;

@interface AXKInputMarkingSessionTracker : NSObject

@property (nonatomic, getter=isStarted) char started;
@property (retain, nonatomic) AXFTextRange *inputMarkingSessionRange;
@property (nonatomic, getter=isInputMarkingSessionActive) char inputMarkingSessionActive;
@property (retain, nonatomic) AXKApplicationController *_applicationController;
@property (retain, nonatomic) AXKElementController *trackingTextElement;
@property (retain, nonatomic, setter=_setCurrentInputMethodWindow:) AXFUIElement *_currentInputMethodWindow;
@property (retain, nonatomic) AXFTextPosition *_inputMarkingSessionStartPosition;
@property (retain, nonatomic) AXFTextPosition *_inputMarkingSessionEndPosition;
@property (copy, nonatomic) NSString *_inlineSessionString;
@property (retain, nonatomic) AXFTextRange *_previousSelectionRange;
@property (retain, nonatomic) NSLock *_propertyLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_observerQueue;
@property (readonly, nonatomic, getter=isShowingCandidateWindow) char showingCandidateWindow;
@property (weak, nonatomic) id<AXKInputMarkingSessionDelegate> delegate;

+ (id)updatedCharactersFromString:(id)a0 preivousString:(id)a1 isDeletion:(char *)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)end;
- (void)_signalDelegateContentInserted:(id)a0;
- (void)_elementCreatedNotification:(id)a0;
- (void)_elementDestroyedNotification:(id)a0;
- (char)_handleCandidateListSelectionChangeForUIElement:(id)a0;
- (void)_inlineSessionEnded:(id)a0;
- (void)_inlineSessionStarted:(id)a0;
- (void)_inputMethodSelectionChanged:(id)a0;
- (void)_readChangedInlineSessionContent;
- (void)_signalDelegateContentChanged:(id)a0;
- (void)_signalDelegateContentDeleted:(id)a0;
- (id)initWithTextElementController:(id)a0;

@end
