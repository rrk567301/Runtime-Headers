@protocol CSKMessagesTableViewEventDelegate;

@interface CSKMessagesTableView : NSTableView

@property (weak, nonatomic) id<CSKMessagesTableViewEventDelegate> eventDelegate;

- (void)keyDown:(id)a0;
- (void).cxx_destruct;

@end
