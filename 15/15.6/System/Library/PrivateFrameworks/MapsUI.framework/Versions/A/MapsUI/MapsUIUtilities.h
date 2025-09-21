@interface MapsUIUtilities : NSObject

+ (char)isSafariProcess;
+ (char)isParsecProcess;
+ (char)isSiriProcess;
+ (void)resizeImageIfNeeded:(id)a0 toFrameSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 completion:(id /* block */)a3;
+ (char)isSpotlightProcess;
+ (id)bundleIdentifierForContext:(unsigned long long)a0;
+ (char)isDataDetectorsProcess;
+ (char)isInApplicationContext:(unsigned long long)a0;
+ (char)isMapsProcess;
+ (void)performOnMainIfNecessary:(id /* block */)a0;

@end
