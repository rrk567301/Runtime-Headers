@class NSArray, NSMutableArray;

@interface EKUIAlarmCompositeGadget : EKUICompositeGadget

@property (retain) NSMutableArray *alarmGadgets;
@property (retain) NSArray *existingConstraints;
@property BOOL showingNewAlarm;

+ (id)interestedChangeKeys;

- (void)setObject:(id)a0;
- (void).cxx_destruct;
- (double)preferredWidth;
- (void)updateConstraints;
- (BOOL)isEditable;
- (id)initWithViewController:(id)a0;
- (BOOL)shouldDisplay;
- (BOOL)updateWithDiff:(id)a0;
- (id)subgadgets;
- (void)addNewAlarmGadget;
- (void)updateGadgetsAddButton;
- (id)addAlarmGadget;
- (void)addNoneAlarmGadget;

@end
