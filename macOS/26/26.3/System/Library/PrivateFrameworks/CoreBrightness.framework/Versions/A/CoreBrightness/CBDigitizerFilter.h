@class CBDigitizerHotspot;

@interface CBDigitizerFilter : CBFilter {
    BOOL _firstDigitizerEvent;
    struct CBDigitizerFilterTouchProperties { float digitizerWidth; float digitizerHeight; float deviceCenterX; float deviceCenterY; float touchHotSpotSquared; } _props;
    long long _behavior;
    CBDigitizerHotspot *_hotspot;
}

@property (readonly, nonatomic) int orientation;
@property (nonatomic) BOOL isActive;

+ (struct CBDigitizerFilterTouchProperties { float x0; float x1; float x2; float x3; float x4; })loadTouchProperties:(struct __IOHIDServiceClient { } *)a0;

- (id)filterEvent:(id)a0;
- (id)handleALSEvent:(id)a0;
- (void)setTriggered:(long long)a0 forHotspot:(id)a1;
- (id)newHotspot;
- (id)newHotspotForOrientation;
- (id)newHospotForLocationX:(float)a0 andY:(float)a1;
- (void)overrideHotspotWithCenterX:(float)a0 andCenterY:(float)a1;
- (id)handleDigitizerEvent:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (BOOL)isObstructed;
- (void)dealloc;
- (id)initWithALSNode:(id)a0 andLogCategory:(const char *)a1;
- (BOOL)isObstructedIgnoreActive;

@end
