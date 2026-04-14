@interface MapsUIUtilities : NSObject

+ (BOOL)isSiriProcess;
+ (BOOL)isParsecProcess;
+ (BOOL)isSafariProcess;
+ (void)performOnMainIfNecessary:(id /* block */)a0;
+ (BOOL)isMapsProcess;
+ (BOOL)isSpotlightProcess;
+ (BOOL)isDataDetectorsProcess;
+ (BOOL)isInApplicationContext:(unsigned long long)a0;
+ (id)bundleIdentifierForContext:(unsigned long long)a0;
+ (void)resizeImageIfNeeded:(id)a0 toFrameSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 completion:(id /* block */)a3;

@end
