@protocol ReadingListSegmentedControlDelegate;

@interface ReadingListSegmentedControl : NSSegmentedControl

@property (readonly, nonatomic) char selectedSegmentIsAllSegment;
@property (readonly, nonatomic) char selectedSegmentIsUnreadSegment;
@property (weak, nonatomic) id<ReadingListSegmentedControlDelegate> readingListSegmentedControlDelegate;

+ (void)initialize;

- (void).cxx_destruct;
- (char)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)selectAllSegment;
- (void)selectUnreadSegment;

@end
