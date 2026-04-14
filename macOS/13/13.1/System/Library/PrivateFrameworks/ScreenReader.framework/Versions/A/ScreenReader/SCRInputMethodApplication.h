@class NSString;

@interface SCRInputMethodApplication : SCRApplication

@property (retain) NSString *previousSelectedCandidate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_inputMethodSelectionChanged:(id)a0;
- (void)_elementWasCreated:(id)a0;
- (void)_elementWasDestroyed:(id)a0;
- (id)_addUIElement:(id)a0;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (void)setIsFrontMost:(BOOL)a0;
- (struct __CFString { } *)selectionNotificationName;
- (void)_outputAdditionalWindowCreatedDescription;
- (id)listUIElement;
- (id)additionalWindowCreatedDescription;
- (id)wordToOutputForUIElement:(id)a0;
- (BOOL)shouldOutputValue;
- (void)_handleListSelectionChangeForUIElement:(id)a0;
- (void)_handleTableSelectionChangeForUIElement:(id)a0;
- (void)_handleInputMethodWindowCreated:(id)a0;

@end
