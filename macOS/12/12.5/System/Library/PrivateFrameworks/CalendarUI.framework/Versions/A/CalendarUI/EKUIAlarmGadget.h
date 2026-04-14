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
- (BOOL)isEditable;
- (void)updateConstraints;
- (double)baselineOffset;
- (id)labelString;
- (id)control;
- (BOOL)shouldDisplay;
- (double)pixelsBetweenLabelAndControl;
- (id)initWithCompositeGadget:(id)a0;
- (void)mouseEnteredGadgetView;
- (void)mouseExitedGadgetView;
- (id)viewForBaselineAlignment;
- (double)preferredControlWidth;
- (void)updateWithAlarm:(id)a0;
- (id)defaultAlarmDescriptionWithAbbreviation:(BOOL)a0;
- (id)addMenuItemForTrigger:(unsigned long long)a0;
- (void)setMenuItem:(id)a0 title:(id)a1 withAbbreviatedTitle:(id)a2;
- (void)alarmTriggerSelected;
- (id)titleForTrigger:(unsigned long long)a0 abbreviated:(BOOL)a1 hasTravelTime:(BOOL)a2;
- (void)updateAlarmWithTrigger:(unsigned long long)a0;
- (double)relativeOffsetForTrigger:(unsigned long long)a0;
- (BOOL)showAddAlarmView;
- (BOOL)hideAddAlarmView;
- (void)updateMenu;
- (id)alarmDescriptionWithAbbreviation:(BOOL)a0;
- (unsigned long long)triggerForRelativeOffset:(double)a0;

@end
