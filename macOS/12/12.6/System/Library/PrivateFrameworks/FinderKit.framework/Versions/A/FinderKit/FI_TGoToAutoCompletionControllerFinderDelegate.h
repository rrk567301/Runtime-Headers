@class NSString;

@interface FI_TGoToAutoCompletionControllerFinderDelegate : NSObject <FI_TGoToAutoCompletionControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)recentItems;
- (struct TGoToAutoCompletionResult { id x0; id x1; BOOL x2; })itemsInPath:(id)a0 relativeToItem:(id)a1;
- (id)globalSuggestedItems;

@end
