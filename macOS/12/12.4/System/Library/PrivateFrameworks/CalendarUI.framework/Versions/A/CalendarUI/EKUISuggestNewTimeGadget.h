@class NSString, NSView, EKUISummaryTextButton, EKUIPopUpButton;

@interface EKUISuggestNewTimeGadget : EKUILabeledGadget <EKUISummary>

@property (retain) NSView *container;
@property (retain) EKUISummaryTextButton *textField;
@property (retain) EKUIPopUpButton *statusPicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (BOOL)isEditable;
- (BOOL)needsExpansion;
- (id)control;
- (id)initWithViewController:(id)a0;
- (id)summaryString;
- (BOOL)shouldDisplay;
- (id)attributedSummaryString;
- (void)updateWithChanges:(id)a0;
- (double)pixelsBetweenLabelAndControl;

@end
