@interface RemindersUICore.TTRMQuickBarEntryView : RemindersUICore.TTRMQuickBarEntryPlatterView <NSGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ horizontalConstraintMode;
    void /* unknown type, empty encoding */ isEditing;
    void /* unknown type, empty encoding */ quickBarFont;
    void /* unknown type, empty encoding */ stackView;
    void /* unknown type, empty encoding */ iconImageView;
    void /* unknown type, empty encoding */ textField;
    void /* unknown type, empty encoding */ clearButton;
    void /* unknown type, empty encoding */ isIconOnlyMode;
    void /* unknown type, empty encoding */ trackingArea;
    void /* unknown type, empty encoding */ horizontalConstraints;
    void /* unknown type, empty encoding */ iconOnlyConstraint;
    void /* unknown type, empty encoding */ iconViewImageConstraint;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldAttemptToRecognizeWithEvent:(id)a1;
- (void)backgroundClickAction:(id)a0;
- (void)clearButtonAction:(id)a0;

@end
