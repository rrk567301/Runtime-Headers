@class NSArray, NSString, NSTextField;

@interface PXNoContentGadgetView : UXView {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
}

@property (retain, nonatomic) NSTextField *titleLabel;
@property (retain, nonatomic) NSTextField *messageLabel;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void)_updateTitleIfNeeded;
- (void)_updateMessageIfNeeded;
- (id)_initializeContraints;

@end
