@class NSView, IAAccount;

@interface IAAListAccessoryViewController : NSObject {
    NSView *_view;
}

@property (readonly) IAAccount *account;

- (id)initWithAccount:(id)a0;
- (id)view;
- (void).cxx_destruct;
- (void)syncUI;

@end
