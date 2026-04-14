@interface SCRMailWindow : SCRWindow

@property (nonatomic) BOOL registeredSummarizingNotificationHandler;
@property (nonatomic) BOOL registeredSummarizedNotificationHandler;

- (id)_messagesTable;
- (void)handleSummarized:(id)a0;
- (void)handleSummarizing:(id)a0;
- (id)prepareArrayToFocusInto;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (BOOL)shouldPromoteUIElement:(id)a0;

@end
