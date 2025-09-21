@class NSString, NSMutableArray;

@interface PXToastPlacardView : UXView {
    BOOL _didLoad;
    NSMutableArray *_actions;
}

@property (copy, nonatomic) NSString *message;

- (void)viewDidMoveToSuperview;
- (void).cxx_destruct;
- (void)_actionForToastAction:(id)a0;
- (void)addActionWithTitle:(id)a0 action:(id /* block */)a1;

@end
