@class NSTextField, NSString, NSView, EKUISummaryTextButton, NSLayoutConstraint;

@interface EKUIDateTimeSummaryGadget : EKUISingleViewGadget <EKUISummary>

@property (retain) NSView *container;
@property (retain) EKUISummaryTextButton *leftTextField;
@property (retain) NSTextField *rightTextField;
@property (retain) EKUISummaryTextButton *bottomTimeTextField;
@property (retain) NSLayoutConstraint *bottomFieldHeightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;

- (id)initWithViewController:(id)a0;
- (id)summaryString;
- (double)verticalPadding;
- (void).cxx_destruct;
- (id)iconSymbolName;
- (id)control;
- (id)parentContainer;
- (id)recurrenceDifferenceDescription;
- (double)horizontalInset;
- (id)attributedSummaryString;
- (id)originalSummaryString;
- (unsigned long long)recurrenceDifferenceCount;
- (id)recurrenceDifferenceTitle;
- (void)resetToOriginalItem;
- (void)setActiveKeyboardHover:(BOOL)a0;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;
- (BOOL)useSplitDateAndTimeFields;
- (BOOL)useTwoLineNonEditingSummary:(BOOL)a0;

@end
