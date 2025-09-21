@class EKUIPopUpButton;

@interface EKUIPriorityGadget : EKUILabeledGadget

@property (retain) EKUIPopUpButton *priorityPicker;

+ (id)interestedChangeKeys;

- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (id)labelString;
- (id)control;
- (void)addMenuItemForPriority:(unsigned long long)a0 withTitle:(id)a1;
- (double)pixelsBetweenLabelAndControl;
- (void)priorityChanged:(id)a0;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;

@end
