@class UIUDetectorCompat;

@interface UIUDetector : NSObject

@property (readonly) UIUDetectorCompat *underlyingObject;

+ (long long)convertPlatform:(long long)a0;
+ (float)defaultIOUThreshold;

- (void).cxx_destruct;
- (id)getDetectionsInScreen:(struct CGImage { } *)a0 addOCR:(char)a1 addIcons:(char)a2 addClickability:(char)a3 addFocusElements:(char)a4 nmsThreshold:(float)a5 useAccurateOCR:(char)a6 error:(id *)a7;
- (id)initForPlatform:(long long)a0;
- (id)initForPlatform:(long long)a0 elementConfidence:(id)a1 clickabilityConfidence:(id)a2 elementConfig:(id)a3 clickabilityConfig:(id)a4;

@end
