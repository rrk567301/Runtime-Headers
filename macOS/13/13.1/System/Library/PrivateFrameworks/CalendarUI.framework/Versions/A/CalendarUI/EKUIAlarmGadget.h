@class EKUIAlarmButton, NSArray, EKUIAlarmContainerView, EKUIPopUpButton, EKAlarm, EKUIAlarmCompositeGadget;

@interface EKUIAlarmGadget : EKUILabeledGadget

@property (retain) EKUIAlarmContainerView *container;
@property (retain) EKUIPopUpButton *alarmPicker;
@property (retain) EKUIAlarmButton *addButton;
@property unsigned long long currentTrigger;
@property (weak) EKUIAlarmCompositeGadget *alarmsContainer;
@property (retain) NSArray *alarmConstraints;
@property (retain) EKAlarm *alarm;
@property BOOL addButtonAvailible;

- (void).cxx_destruct;
- (double)baselineOffset;
- (void)updateConstraints;
- (BOOL)isEditable;
- (id)labelString;
- (id)control;
- (BOOL)shouldDisplay;
- (double)pixelsBetweenLabelAndControl;
- (id)initWithCompositeGadget:(id)a0;
- (void)mouseEnteredGadgetView;
- (void)mouseExitedGadgetView;
- (id)viewForBaselineAlignment;
- (double)preferredControlWidth;
- (void)alarmTriggerSelected;
- (void)updateMenu;
- (void)setMenuItem:(id)a0 title:(id)a1 withAbbreviatedTitle:(id)a2;
- (id)addMenuItemForTrigger:(unsigned long long)a0;
- (id)titleForTrigger:(unsigned long long)a0 abbreviated:(BOOL)a1 hasTravelTime:(BOOL)a2;
- (double)relativeOffsetForTrigger:(unsigned long long)a0;
- (unsigned long long)triggerForRelativeOffset:(double)a0;
- (void)updateAlarmWithTrigger:(unsigned long long)a0;
- (BOOL)showAddAlarmView;
- (BOOL)hideAddAlarmView;
- (id)alarmDescriptionWithAbbreviation:(BOOL)a0;
- (id)defaultAlarmDescriptionWithAbbreviation:(BOOL)a0;
- (void)updateWithAlarm:(id)a0 timeToLeaveAlarm:(BOOL)a1;

@end
