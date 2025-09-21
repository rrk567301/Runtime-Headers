@class QLMarkupViewController, NSSet, NSView, NSOperationQueue, NSURL, NSString;
@protocol QLMarkupControllerDelegate;

@interface QLMarkupController : NSObject <NSFilePresenter, QLMarkupViewControllerDelegate>

@property (retain) NSOperationQueue *presentedItemOperationQueue;
@property (retain) QLMarkupViewController *markupViewController;
@property (weak) id<QLMarkupControllerDelegate> delegate;
@property (retain) NSURL *shareItemURL;
@property char saveInPlace;
@property (retain) NSView *toolbarParentViewNeedingUpdate;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)savePresentedItemChangesWithCompletionHandler:(id /* block */)a0;
- (void)_saveForClosing:(char)a0;
- (void)_setupFileForSharingDirtyEdits;
- (void)_teardownFileForSharingDirtyEdits;
- (void)cleanupForTeardown;
- (void)editOccuredOnPage:(long long)a0;
- (void)enterMarkup;
- (void)exitMarkup:(long long)a0 needsSave:(char *)a1;
- (void)markupBecameDirty:(char)a0;
- (void)promptSaveForCloseWithCloseHandler:(id /* block */)a0;
- (void)revertMarkup;

@end
