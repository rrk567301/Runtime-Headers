@class NSString;
@protocol SGContactSuggestionDelegate;

@interface SGContactSuggestion : SGContactSuggestionBase <SuggestedContactPopoverControllerDelegate>

@property (weak, nonatomic) id<SGContactSuggestionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contactImage;

- (void).cxx_destruct;
- (id)suggestionPrimaryAction;
- (id)suggestionPrimaryActionViewController;
- (void)contactPopoverController:(id)a0 didIgnoreSuggestedContact:(id)a1;
- (void)contactPopoverController:(id)a0 didCommitSuggestedContact:(id)a1;

@end
