@class NSColor;

@interface PXLivePhotoTrimScrubberSnapStripControllerSpec : NSObject

@property (retain, nonatomic) NSColor *disabledColor;
@property (retain, nonatomic) NSColor *currentPositionMarkerColor;
@property (retain, nonatomic) NSColor *originalPositionMarkerColor;
@property (retain, nonatomic) NSColor *suggestedMarkerColor;
@property (nonatomic) char alwaysShowKeyTime;
@property (nonatomic) char showDefaultKeyTime;
@property (nonatomic) char livePortraitStyle;

- (id)init;
- (void).cxx_destruct;

@end
