@class NSString, SGSuggestedEventLaunchInfo;

@interface EKUIURLGadget : EKUISingleTextFieldGadget <CalUIResizingTextFieldDelegate>

@property BOOL mouseEntered;
@property (retain) SGSuggestedEventLaunchInfo *launchInfo;
@property BOOL shouldScrollTextFieldToTop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;
+ (id)_suggestionsServiceForEvents;

- (void)setObject:(id)a0;
- (BOOL)hasData;
- (void).cxx_destruct;
- (id)url;
- (id)accessibilityIdentifier;
- (BOOL)performDragOperation:(id)a0;
- (id)initWithViewController:(id)a0;
- (BOOL)clickedOnLink:(id)a0 atIndex:(unsigned long long)a1;
- (double)maxHeight;
- (id)placeholderText;
- (BOOL)shouldDisplay;
- (id)claimedPboardTypes;
- (void)updateWithChanges:(id)a0;
- (BOOL)wantsToDisplay;
- (void)updateEvent;
- (void)mouseEnteredGadgetView;
- (void)mouseExitedGadgetView;

@end
