@interface CNContactPickerViewLayout : NSObject

@property (readonly, nonatomic, getter=isGroupListVisible) BOOL groupListVisible;
@property (readonly, nonatomic, getter=isContactCardVisible) BOOL contactCardVisible;

+ (id)layoutWithGroupListVisible:(BOOL)a0 contactCardVisible:(BOOL)a1;

- (id)constraintsWithMetrics:(id)a0 views:(id)a1;
- (id)initWithGroupListVisible:(BOOL)a0 contactCardVisible:(BOOL)a1;
- (id)topBarViewsInViews:(id)a0;
- (void)horizontallyAlignViews:(id)a0 withBuilder:(id)a1 spacing:(double)a2 insetMetricName:(id)a3;
- (void)addTopBarConstraints:(id)a0 withViews:(id)a1;
- (void)addGroupListConstraintsWithBuilder:(id)a0;
- (void)addContentViewConstraintsWithBuilder:(id)a0;
- (void)addContactCardViewConstraintsWithBuilder:(id)a0;
- (id)listViewsInViews:(id)a0;

@end
