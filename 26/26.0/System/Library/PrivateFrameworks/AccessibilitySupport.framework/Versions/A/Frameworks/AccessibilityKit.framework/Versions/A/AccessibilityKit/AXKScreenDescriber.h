@class NSObject;
@protocol OS_dispatch_queue, AXKScreenDescriberDelegate;

@interface AXKScreenDescriber : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_delegateQueue;
@property (weak, nonatomic) id<AXKScreenDescriberDelegate> delegate;

- (void)start;
- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateFrameForElement:(id)a0 contentRange:(id)a1;
- (id)_contentOfElement:(id)a0 topLevelElement:(id)a1;
- (void)_describeContentOfWindow:(id)a0;
- (id)_describeContentStartingFrom:(id)a0 inPage:(id)a1 ofWindow:(id)a2 inDirection:(long long)a3;
- (id)_describeFromFocusedElement:(id)a0;
- (id)_describeFromLargestSection:(id)a0;
- (id)_describeWithApplicationContentAccessor:(id)a0;
- (id)_findLandmarkMain:(id)a0;
- (id)_findWebArea:(id)a0;
- (id)_findWindowForElement:(id)a0;
- (id)_fontForElement:(id)a0 role:(id)a1;
- (id)_gatherAttributedContentForElement:(id)a0 contentRange:(id)a1 visibleRange:(id)a2 fallbackLabel:(id)a3;
- (BOOL)_isReadableElement:(id)a0;
- (id)_readableContentForElement:(id)a0 windowElement:(id)a1 topLevelElement:(id)a2;
- (id)_readableContentOfElement:(id)a0 topLevelElement:(id)a1;
- (id)_readableContentOfElement:(id)a0 topLevelElement:(id)a1 visitedChildren:(id)a2 currentReadableContents:(id)a3 depth:(long long)a4;
- (BOOL)_scrollToElement:(id)a0 inPage:(id)a1 ofWindow:(id)a2 inDirection:(long long)a3;
- (void)_signalDelegateContentNotFoundForElement:(id)a0;
- (void)_signalDelegateDidFinishDescribingElement:(id)a0;
- (void)_signalDelegateDidFinishDescribingElements:(id)a0;
- (void)_signalDelegateDidFinishDescribingElementsStartingFrom:(id)a0 ofWindow:(id)a1 inDirection:(long long)a2 readableContent:(id)a3;
- (void)_signalDelegateHasNoContentForWindow:(id)a0 inDirection:(long long)a1;
- (id)_titleForWindow:(id)a0 topLevelElement:(id)a1;
- (BOOL)_totalCharacterCount:(id)a0 exceedsLimit:(long long)a1;
- (id)_webContentElement:(id)a0;
- (void)describeContentOfFocusedWindow;
- (void)describeContentOfWindow:(id)a0;
- (void)describeContentStartingFrom:(id)a0 inPage:(id)a1 ofWindow:(id)a2 inDirection:(long long)a3;
- (void)scrollToElement:(id)a0 inPage:(id)a1 ofWindow:(id)a2 inDirection:(long long)a3;

@end
