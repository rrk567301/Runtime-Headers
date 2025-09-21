@interface MapsUIUtilities : NSObject

+ (BOOL)isSpotlightProcess;
+ (BOOL)isSafariProcess;
+ (BOOL)isParsecProcess;
+ (BOOL)isSiriProcess;
+ (void)resizeImageIfNeeded:(id)a0 toFrameSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 completion:(id /* block */)a3;
+ (id)bundleIdentifierForContext:(unsigned long long)a0;
+ (BOOL)isDataDetectorsProcess;
+ (BOOL)isInApplicationContext:(unsigned long long)a0;
+ (BOOL)isInApplicationContexts:(id)a0;
+ (BOOL)isMapsProcess;
+ (void)performOnMainIfNecessary:(id /* block */)a0;

@end
