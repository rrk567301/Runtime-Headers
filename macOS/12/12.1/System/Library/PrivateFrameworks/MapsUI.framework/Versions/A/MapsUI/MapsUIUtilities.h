@interface MapsUIUtilities : NSObject

+ (BOOL)isSafariProcess;
+ (BOOL)isSiriProcess;
+ (BOOL)isParsecProcess;
+ (BOOL)isInApplicationContext:(unsigned long long)a0;
+ (BOOL)isSpotlightProcess;
+ (BOOL)isDataDetectorsProcess;
+ (id)bundleIdentifierForContext:(unsigned long long)a0;
+ (void)performOnMainIfNecessary:(id /* block */)a0;
+ (BOOL)isMapsProcess;
+ (void)resizeImageIfNeeded:(id)a0 toFrameSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 completion:(id /* block */)a3;

@end
