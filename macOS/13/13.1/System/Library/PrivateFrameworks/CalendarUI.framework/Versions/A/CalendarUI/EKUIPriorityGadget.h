@class EKUIPopUpButton;

@interface EKUIPriorityGadget : EKUILabeledGadget

@property (retain) EKUIPopUpButton *priorityPicker;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;
- (id)labelString;
- (id)control;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;
- (double)pixelsBetweenLabelAndControl;
- (void)priorityChanged:(id)a0;
- (void)addMenuItemForPriority:(unsigned long long)a0 withTitle:(id)a1;

@end
