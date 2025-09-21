@class EKUIAlarmButton, NSArray, EKUIAlarmContainerView, EKUIPopUpButton, EKAlarm, EKUIAlarmCompositeGadget;

@interface EKUIAlarmGadget : EKUILabeledGadget

@property (retain) EKUIAlarmContainerView *container;
@property (retain) EKUIPopUpButton *alarmPicker;
@property (retain) EKUIAlarmButton *addButton;
@property unsigned long long currentTrigger;
@property (weak) EKUIAlarmCompositeGadget *alarmsContainer;
@property (retain) NSArray *alarmConstraints;
@property (retain) EKAlarm *alarm;
@property char addButtonAvailible;

- (void).cxx_destruct;
- (double)baselineOffset;
- (char)isEditable;
- (void)updateConstraints;
- (id)labelString;
- (id)control;
- (id)addMenuItemForTrigger:(unsigned long long)a0;
- (id)alarmDescriptionWithAbbreviation:(char)a0;
- (void)alarmTriggerSelected;
- (id)defaultAlarmDescriptionWithAbbreviation:(char)a0;
- (char)hideAddAlarmView;
- (id)initWithCompositeGadget:(id)a0;
- (void)mouseEnteredGadgetView;
- (void)mouseExitedGadgetView;
- (double)pixelsBetweenLabelAndControl;
- (double)preferredControlWidth;
- (double)relativeOffsetForTrigger:(unsigned long long)a0;
- (void)setMenuItem:(id)a0 title:(id)a1 withAbbreviatedTitle:(id)a2;
- (char)shouldDisplay;
- (char)showAddAlarmView;
- (id)titleForTrigger:(unsigned long long)a0 abbreviated:(char)a1 hasTravelTime:(char)a2;
- (unsigned long long)triggerForRelativeOffset:(double)a0;
- (void)updateAlarmWithTrigger:(unsigned long long)a0;
- (void)updateMenu;
- (void)updateWithAlarm:(id)a0 timeToLeaveAlarm:(char)a1;
- (id)viewForBaselineAlignment;

@end
