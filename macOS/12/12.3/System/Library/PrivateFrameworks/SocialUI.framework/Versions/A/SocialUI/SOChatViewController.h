@class SOChatDisplayController;

@interface SOChatViewController : NSViewController

@property (readonly) SOChatDisplayController *chatDisplayController;

- (void)setRepresentedObject:(id)a0;
- (void)chatDisplayControllerWillChange:(id)a0;
- (void)chatDisplayControllerDidChange:(id)a0;
- (id)chatDisplayController;

@end
