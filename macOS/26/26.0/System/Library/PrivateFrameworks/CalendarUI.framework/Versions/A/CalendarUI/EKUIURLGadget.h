@class NSString, SGSuggestedEventLaunchInfo;

@interface EKUIURLGadget : EKUISingleTextFieldGadget <CalUIResizingTextFieldDelegate>

@property BOOL mouseEntered;
@property (retain) SGSuggestedEventLaunchInfo *launchInfo;
@property BOOL shouldScrollTextFieldToTop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_suggestionsServiceForEvents;
+ (id)interestedChangeKeys;

- (void)setObject:(id)a0;
- (BOOL)hasData;
- (id)url;
- (id)initWithViewController:(id)a0;
- (double)maxHeight;
- (id)accessibilityIdentifier;
- (void).cxx_destruct;
- (BOOL)clickedOnLink:(id)a0 atIndex:(unsigned long long)a1;
- (id)iconSymbolName;
- (BOOL)performDragOperation:(id)a0;
- (id)placeholderText;
- (id)recurrenceDifferenceDescription;
- (id)claimedPboardTypes;
- (void)mouseEnteredGadgetView;
- (void)mouseExitedGadgetView;
- (unsigned long long)recurrenceDifferenceCount;
- (id)recurrenceDifferenceTitle;
- (void)resetToOriginalItem;
- (BOOL)shouldDisplay;
- (void)updateEvent;
- (void)updateWithChanges:(id)a0;
- (BOOL)wantsToDisplay;

@end
