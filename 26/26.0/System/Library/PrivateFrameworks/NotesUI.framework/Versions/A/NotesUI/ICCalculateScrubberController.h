@class NSTextView, ICNote;

@interface ICCalculateScrubberController : NSObject <NSGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ scrubber;
    void /* unknown type, empty encoding */ numberLiteral;
    void /* unknown type, empty encoding */ scrubberView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hoverController;
    void /* unknown type, empty encoding */ isBlockingMerge;
    void /* unknown type, empty encoding */ isPausingUndoActions;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ popover;
}

@property (nonatomic, readonly) NSTextView *textView;
@property (nonatomic, retain) ICNote *note;
@property (nonatomic, readonly) BOOL isScrubbing;
@property (nonatomic, readonly) BOOL isShowing;

- (void)dealloc;
- (id)initWithTextView:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)updateText:(id)a0;
- (void)hideScrubber;
- (void)resetHoverTimer;
- (void)deselectText;
- (void)didBeginScrub;
- (void)didEndScrub;
- (void)endBlockingMerge;
- (void)endPausingUndoActions;
- (void)hideIfNotScrubbing;
- (void)setHoveredCharacterIndex:(long long)a0;
- (void)showScrubberForNumberLiteral:(id)a0 isCompact:(BOOL)a1;
- (void)startBlockingMerge;
- (void)startPausingUndoActions;

@end
