@class NSView, IAAccount;

@interface IAAListAccessoryViewController : NSObject {
    NSView *_view;
}

@property (readonly) IAAccount *account;

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (id)view;
- (void)syncUI;

@end
