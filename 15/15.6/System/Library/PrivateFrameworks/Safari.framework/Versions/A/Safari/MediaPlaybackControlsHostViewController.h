@class AVTouchBarScrubber, NSString, NSView;
@protocol AccordionHostableExpansionRequestHandler, MediaPlaybackControlsHostViewControllerDelegate;

@interface MediaPlaybackControlsHostViewController : NSViewController <AccordionHostable, AVTouchBarScrubberDelegate> {
    NSView *_collapsedPlaceholderView;
}

@property (readonly, nonatomic, getter=isExpanded) char expanded;
@property (readonly, nonatomic) AVTouchBarScrubber *mediaPlaybackControlsView;
@property (weak, nonatomic) id<MediaPlaybackControlsHostViewControllerDelegate> delegate;
@property (weak, nonatomic) id<AccordionHostableExpansionRequestHandler> expansionRequestHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithView:(id)a0;
- (void)loadView;
- (void)touchBarScrubberExpandButtonTapped:(id)a0;
- (void)accordionHost:(id)a0 viewWillCollapse:(char)a1;
- (void)_setHiddenWithoutImplicitAnimations:(char)a0;
- (void)accordionHost:(id)a0 viewWillBeInserted:(char)a1 viewWillExpand:(char)a2;
- (void)accordionHost:(id)a0 viewWillBeRemoved:(char)a1;
- (void)accordionHost:(id)a0 viewWillExpand:(char)a1;
- (double)minimumWidthForAccordionHost:(id)a0;
- (char)shouldExpandWhenClickedForAccordionHost:(id)a0;
- (char)shouldInitiallyExpandForAccordionHost:(id)a0;

@end
