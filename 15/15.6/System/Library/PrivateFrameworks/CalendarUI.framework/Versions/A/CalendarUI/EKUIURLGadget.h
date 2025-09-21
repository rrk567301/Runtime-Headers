@class NSString, SGSuggestedEventLaunchInfo;

@interface EKUIURLGadget : EKUISingleTextFieldGadget <CalUIResizingTextFieldDelegate>

@property char mouseEntered;
@property (retain) SGSuggestedEventLaunchInfo *launchInfo;
@property char shouldScrollTextFieldToTop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_suggestionsServiceForEvents;
+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (char)hasData;
- (void)setObject:(id)a0;
- (id)url;
- (id)accessibilityIdentifier;
- (char)clickedOnLink:(id)a0 atIndex:(unsigned long long)a1;
- (char)performDragOperation:(id)a0;
- (double)maxHeight;
- (id)initWithViewController:(id)a0;
- (id)placeholderText;
- (id)recurrenceDifferenceDescription;
- (id)claimedPboardTypes;
- (void)mouseEnteredGadgetView;
- (void)mouseExitedGadgetView;
- (unsigned long long)recurrenceDifferenceCount;
- (id)recurrenceDifferenceTitle;
- (void)resetToOriginalItem;
- (char)shouldDisplay;
- (void)updateEvent;
- (void)updateWithChanges:(id)a0;
- (char)wantsToDisplay;

@end
