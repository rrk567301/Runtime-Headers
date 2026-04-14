@class NSEvent;

@interface NSVBAccessoryWindowBackstopResponder : NSResponder

@property NSEvent *eventReceived;

- (void)cancel:(id)a0;
- (void)keyDown:(id)a0;
- (void)installAtEndOfChainAfterResponder:(id)a0;
- (void)uninstallFromChainAfterResponder:(id)a0;

@end
