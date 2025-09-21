@interface CNContactPickerViewLayout : NSObject

@property (readonly, nonatomic, getter=isGroupListVisible) char groupListVisible;
@property (readonly, nonatomic, getter=isContactCardVisible) char contactCardVisible;

+ (id)layoutWithGroupListVisible:(char)a0 contactCardVisible:(char)a1;

- (void)addTopBarConstraints:(id)a0 withViews:(id)a1;
- (void)addContactCardViewConstraintsWithBuilder:(id)a0;
- (void)addContentViewConstraintsWithBuilder:(id)a0;
- (void)addGroupListConstraintsWithBuilder:(id)a0;
- (id)constraintsWithMetrics:(id)a0 views:(id)a1;
- (void)horizontallyAlignViews:(id)a0 withBuilder:(id)a1 spacing:(double)a2 insetMetricName:(id)a3;
- (id)initWithGroupListVisible:(char)a0 contactCardVisible:(char)a1;
- (id)listViewsInViews:(id)a0;
- (id)topBarViewsInViews:(id)a0;

@end
