@class NSString, NSTimer, NSDictionary, QLAccessibilityUIElement, NSObject, QLMediaUIScrubber;
@protocol QLTimeSliderDataSource;

@interface QLTimeSlider : NSView <QLMediaUIScrubberDelegate, QLAccessibilityUIElementDelegate> {
    QLMediaUIScrubber *_scrubber;
    double _duration;
    NSTimer *_refreshTimer;
    double _lastDrawPercentage;
    NSString *_lastTimeString;
    BOOL _autoUpdates;
    BOOL _wasPlayingBeforeTracking;
    NSDictionary *_uiElements;
    struct __CFDictionary { } *_timeAttributes;
    double _textHeight;
    double _positiveTextWidth;
    double _negativeTextWidth;
}

@property (retain) QLAccessibilityUIElement *timeFieldAXElement;
@property BOOL autoUpdates;
@property (nonatomic) BOOL willHide;
@property BOOL willAutoplay;
@property (readonly) BOOL optimizedDrawing;
@property (readonly) NSObject<QLTimeSliderDataSource> *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (struct CGSize { double x0; double x1; })buttonSize;
+ (id)playImage;
+ (id)pauseImage;
+ (double)controlHeight;
+ (Class)mediaUIScrubber;
+ (id)timeStringFromTimeInterval:(double)a0 longForm:(BOOL)a1;
+ (double)buttonsInterspace;
+ (id)soundOffImage;
+ (id)soundOnImage;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityChildren;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)mouseDownCanMoveWindow;
- (void)mouseUp:(id)a0;
- (void)setNeedsUpdate:(BOOL)a0;
- (void)_updateButtons;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_trackRect;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned int)_CAViewFlags;
- (void)buttonClicked:(id)a0;
- (void)_updateRefreshTimer;
- (void)_setupButtons;
- (void)_updateScrubber;
- (void)startControlWithDataSource:(id)a0;
- (void)stopControl;
- (BOOL)accessibilityPerformPress:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForUIElementInParentSpace:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForUIElement:(id)a0;
- (id)accessibilityValueFor:(id)a0;
- (void)scrubberFrameDidChange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_timeRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_timebarRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_buttonsRect;
- (id)_addButtonWithTag:(long long)a0 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (id)_buttonTitleForTag:(long long)a0;
- (id)newButtonWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tag:(long long)a1 title:(id)a2;
- (void)getTimeColorGrayComponents:(double *)a0;
- (void)scrubberWillStartTracking:(id)a0;
- (void)scrubberDidStopTracking:(id)a0;
- (double)scrubber:(id)a0 willChangeValue:(double)a1;

@end
