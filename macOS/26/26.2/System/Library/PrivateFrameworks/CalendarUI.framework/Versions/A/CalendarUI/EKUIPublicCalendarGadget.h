@class NSButton, NSView;

@interface EKUIPublicCalendarGadget : EKUISingleViewGadget

@property (retain) NSButton *publicCalendarCheckbox;
@property (retain) NSView *publicLinkDescriptionContainer;

- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (id)control;
- (void)publicURLBoxClicked:(id)a0;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;

@end
