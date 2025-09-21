@protocol ReadingListSegmentedControlDelegate;

@interface ReadingListSegmentedControl : NSSegmentedControl

@property (readonly, nonatomic) BOOL selectedSegmentIsAllSegment;
@property (readonly, nonatomic) BOOL selectedSegmentIsUnreadSegment;
@property (weak, nonatomic) id<ReadingListSegmentedControlDelegate> readingListSegmentedControlDelegate;

+ (void)initialize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)becomeFirstResponder;
- (void).cxx_destruct;
- (void)selectAllSegment;
- (void)selectUnreadSegment;

@end
