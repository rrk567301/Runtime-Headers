@class NSString, NSAttributedString;

@interface RemindersUICore.TTRMQuickBarEntryTextField : RemindersUICore.TTRMRemindersListTextField {
    void /* unknown type, empty encoding */ isHitTestEnabled;
    void /* unknown type, empty encoding */ horizontalCompressionResistanceInfo;
    void /* unknown type, empty encoding */ minimumHorizontalWidthWhenPopulatedConstraint;
}

@property (class, nonatomic) Class cellClass;

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, copy) NSString *stringValue;
@property (nonatomic, retain) NSAttributedString *placeholderAttributedString;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;

@end
