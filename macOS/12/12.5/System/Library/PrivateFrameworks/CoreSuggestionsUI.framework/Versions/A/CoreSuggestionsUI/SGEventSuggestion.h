@class NSString, NSImage, NSViewController;

@interface SGEventSuggestion : SGEventSuggestionBase <SuggestedEventPopoverControllerDelegate> {
    NSImage *_calendarImage;
    NSViewController *_suggestionPrimaryActionViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)calendarImage;

- (void).cxx_destruct;
- (id)suggestionPrimaryAction;
- (id)suggestionAttributedSubtitle;
- (id)suggestionImage;
- (id)suggestionPrimaryActionViewController;
- (void)cancelSuggestedEventPopoverController:(id)a0;
- (void)suggestedEventPopoverController:(id)a0 wantsToCommitSuggestedEvent:(id)a1 asEvent:(id)a2;
- (void)suggestedEventPopoverController:(id)a0 wantsToIgnoreSuggestedEvent:(id)a1;
- (void)reloadSuggestionPrimaryActionViewController;
- (void)_dismissViewController:(id)a0 retainBanner:(BOOL)a1;
- (void)preloadPrimaryActionViewController;

@end
