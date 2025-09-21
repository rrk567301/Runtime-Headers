@class NSString, NSView, NSImage, NSTouchBar;

@interface NSPopoverTouchBarItem : NSTouchBarItem <NSTouchBarItemTypePopover, NSGestureRecognizerDelegate> {
    NSTouchBar *_popoverTouchBar;
    NSTouchBar *_pressAndHoldTouchBar;
    id _overlay;
    NSString *_customizationLabel;
    NSView *_collapsedRepresentation;
    NSImage *_collapsedRepresentationImage;
    NSString *_collapsedRepresentationLabel;
    id /* block */ _closeButtonHandler;
    unsigned char _showsCloseButton : 1;
    unsigned char _showsControlStrip : 1;
    unsigned char _collapsedRepresentationChevronBehavior : 2;
    unsigned char _preventUserDismissal : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) char isPresented;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSTouchBar *popoverTouchBar;
@property (copy) NSString *customizationLabel;
@property (retain) NSView *collapsedRepresentation;
@property (retain) NSImage *collapsedRepresentationImage;
@property (retain) NSString *collapsedRepresentationLabel;
@property (retain) NSTouchBar *pressAndHoldTouchBar;
@property char showsCloseButton;

+ (id)keyPathsForValuesAffectingPresented;
+ (id)keyPathsForValuesAffectingView;
+ (id)makeStandardActivatePopoverGestureRecognizer;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)view;
- (void)dismissPopover:(id)a0;
- (void)setShowsControlStripForOverlay:(char)a0;
- (char)_gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_handleSwipe:(char)a0;
- (void)_popoverSlide:(id)a0;
- (id)_primarySliderTouchBarItem;
- (void)_showPressHoldPopup:(id)a0;
- (void)_swipeLeftToRight:(id)a0;
- (void)_swipeRightToLeft:(id)a0;
- (long long)_type;
- (id /* block */)closeButtonHandler;
- (long long)collapsedRepresentationChevronBehavior;
- (char)collapsedRepresentationShowsChevron;
- (long long)fingerBias;
- (char)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (char)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (char)gestureRecognizerShouldBegin:(id)a0;
- (id)makeStandardActivatePopoverGestureRecognizer;
- (id)makeStandardSliderPanGestureRecognizer;
- (id)makeStandardSwipeGestureRecognizers;
- (char)preventUserDismissal;
- (void)setCloseButtonHandler:(id /* block */)a0;
- (void)setCollapsedRepresentationChevronBehavior:(long long)a0;
- (void)setCollapsedRepresentationShowsChevron:(char)a0;
- (void)setPreventUserDismissal:(char)a0;
- (void)setSupportsPressAndHold:(char)a0;
- (void)showPopover:(id)a0;
- (char)showsControlStripForOverlay;
- (char)supportsPressAndHold;

@end
