@class EKUIPopUpButton;

@interface EKUIPriorityGadget : EKUILabeledGadget

@property (retain) EKUIPopUpButton *priorityPicker;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (id)labelString;
- (id)control;
- (id)initWithViewController:(id)a0;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;
- (double)pixelsBetweenLabelAndControl;
- (void)addMenuItemForPriority:(unsigned long long)a0 withTitle:(id)a1;
- (void)priorityChanged:(id)a0;

@end
