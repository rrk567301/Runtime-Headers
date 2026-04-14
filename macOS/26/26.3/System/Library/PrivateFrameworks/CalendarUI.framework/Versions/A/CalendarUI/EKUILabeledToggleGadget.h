@class NSSwitch;

@interface EKUILabeledToggleGadget : EKUILabeledGadget

@property (retain) NSSwitch *toggle;

- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (id)labelString;
- (id)control;
- (BOOL)canBeToggled;
- (BOOL)isToggledOn;
- (double)pixelsBetweenLabelAndControl;
- (double)preferredControlWidth;
- (void)toggleToggled;
- (void)updateEvent;
- (void)updateWithChanges:(id)a0;

@end
