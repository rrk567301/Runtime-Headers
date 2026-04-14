@class NSArray, NSMutableArray;

@interface EKUIAlarmCompositeGadget : EKUICompositeGadget

@property (retain) NSMutableArray *alarmGadgets;
@property (retain) NSArray *existingConstraints;
@property BOOL showingNewAlarm;

+ (id)interestedChangeKeys;

- (BOOL)isEditable;
- (id)initWithViewController:(id)a0;
- (void)setObject:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (double)preferredWidth;
- (void)setExpanded:(BOOL)a0;
- (BOOL)updateWithDiff:(id)a0;
- (id)addAlarmGadget;
- (void)addNewAlarmGadget;
- (void)addNoneAlarmGadget;
- (BOOL)shouldDisplay;
- (id)subgadgets;
- (void)updateGadgetsAddButton;

@end
