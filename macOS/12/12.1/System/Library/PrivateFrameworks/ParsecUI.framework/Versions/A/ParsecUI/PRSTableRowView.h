@class NSBox, NSLayoutConstraint;
@protocol PRSTableRowDelegate;

@interface PRSTableRowView : NSTableRowView {
    NSBox *_lineView;
    NSLayoutConstraint *_cellWidth;
}

@property (nonatomic) BOOL gridlinedBelow;
@property double inset;
@property double additionalInset;
@property (retain, nonatomic) id<PRSTableRowDelegate> tableRowDelegate;

- (void).cxx_destruct;
- (void)layout;
- (BOOL)accessibilityPerformPress;
- (void)updateConstraints;

@end
