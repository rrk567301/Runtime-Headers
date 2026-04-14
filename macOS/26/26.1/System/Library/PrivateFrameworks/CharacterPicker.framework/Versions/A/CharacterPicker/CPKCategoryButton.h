@class NSTimer, NSString, CALayer;

@interface CPKCategoryButton : NSButton {
    CALayer *highlightLayer;
}

@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic) unsigned long long iconIndex;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (retain, nonatomic) NSTimer *hoveringTimer;
@property (copy, nonatomic) NSString *tooltipIdentifier;

+ (id)categoryButtonWithSizeBoundedToImage:(id)a0;

- (void)mouseUp:(id)a0;
- (BOOL)selected;
- (void)mouseExited:(id)a0;
- (void)updateTrackingAreas;
- (void)mouseEntered:(id)a0;
- (void).cxx_destruct;
- (void)updateLayer;
- (BOOL)isFlipped;
- (BOOL)wantsLayer;
- (BOOL)wantsUpdateLayer;
- (void)hideTooltip;
- (void)startHoveringTimerWithDuration:(double)a0;
- (void)showTooltip;
- (void)stopHoveringTimer;

@end
