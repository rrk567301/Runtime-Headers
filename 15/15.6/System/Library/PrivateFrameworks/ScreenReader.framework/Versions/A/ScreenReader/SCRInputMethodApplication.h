@class NSString;

@interface SCRInputMethodApplication : SCRApplication

@property (retain) NSString *previousSelectedCandidate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_inputMethodSelectionChanged:(id)a0;
- (void)setIsFrontMost:(char)a0;
- (id)_addUIElement:(id)a0;
- (void)_elementWasCreated:(id)a0;
- (void)_elementWasDestroyed:(id)a0;
- (void)_handleInputMethodWindowCreated:(id)a0;
- (void)_handleListSelectionChangeForUIElement:(id)a0;
- (void)_handleTableSelectionChangeForUIElement:(id)a0;
- (void)_outputAdditionalWindowCreatedDescription;
- (id)additionalWindowCreatedDescription;
- (char)handleEvent:(id)a0 request:(id)a1;
- (id)listUIElement;
- (struct __CFString { } *)selectionNotificationName;
- (char)shouldOutputValue;
- (id)wordToOutputForUIElement:(id)a0;

@end
