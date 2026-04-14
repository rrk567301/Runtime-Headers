@class NSString, NSView, SiriUIContentLabel, NSStackView, NSButton;

@interface SVSErrorMessageView : NSView {
    NSStackView *_stackView;
    SiriUIContentLabel *_headerLabel;
    SiriUIContentLabel *_subHeaderLabel;
    NSView *_actionButtonContainer;
    NSButton *_actionButton;
}

@property (retain, nonatomic) NSString *headerText;
@property (retain, nonatomic) NSString *subHeaderText;
@property (retain, nonatomic) NSString *actionButtonText;
@property (copy, nonatomic) id /* block */ actionButtonBlock;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })fittingSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_createConstraints;
- (void)_onActionButton:(id)a0;

@end
