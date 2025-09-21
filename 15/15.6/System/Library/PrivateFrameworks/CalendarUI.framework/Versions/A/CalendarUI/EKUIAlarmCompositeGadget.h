@class NSArray, NSMutableArray;

@interface EKUIAlarmCompositeGadget : EKUICompositeGadget

@property (retain) NSMutableArray *alarmGadgets;
@property (retain) NSArray *existingConstraints;
@property char showingNewAlarm;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (void)setObject:(id)a0;
- (char)isEditable;
- (double)preferredWidth;
- (void)updateConstraints;
- (id)initWithViewController:(id)a0;
- (char)updateWithDiff:(id)a0;
- (id)addAlarmGadget;
- (void)addNewAlarmGadget;
- (void)addNoneAlarmGadget;
- (char)shouldDisplay;
- (id)subgadgets;
- (void)updateGadgetsAddButton;

@end
