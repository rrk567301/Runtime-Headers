@class NSArray, NSMutableArray;

@interface EKUIAlarmCompositeGadget : EKUICompositeGadget

@property (retain) NSMutableArray *alarmGadgets;
@property (retain) NSArray *existingConstraints;
@property BOOL showingNewAlarm;

+ (id)interestedChangeKeys;

- (BOOL)isEditable;
- (double)preferredWidth;
- (id)initWithViewController:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)setObject:(id)a0;
- (void)setExpanded:(BOOL)a0;
- (BOOL)updateWithDiff:(id)a0;
- (id)addAlarmGadget;
- (void)addNewAlarmGadget;
- (void)addNoneAlarmGadget;
- (BOOL)shouldDisplay;
- (id)subgadgets;
- (void)updateGadgetsAddButton;

@end
