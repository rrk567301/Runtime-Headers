@class NSTextField, NSScrollView, _NSDebugTDLineView, NSTextView;

@interface NSDebugTDInspectorResultsTableCellView : NSTableCellView {
    _NSDebugTDLineView *_line;
    NSScrollView *_scrollView;
}

@property (nonatomic) BOOL showAttributedString;
@property (nonatomic) BOOL isHeading;
@property (retain, nonatomic) NSTextField *secondaryLabel;
@property (retain, nonatomic) NSTextView *largeTextView;
@property (nonatomic) double rowHeight;

+ (double)attributedTextScrollViewHeight;

- (void)layout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)createAndSubviewLargeTextView;

@end
