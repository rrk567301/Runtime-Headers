@class NSString, PVFrameSet;

@interface PVLivePlayerImageSource : NSObject <PVLivePlayerSource> {
    PVFrameSet *_imageFrame;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)play;
- (void)setMuted:(BOOL)a0;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })itemTimeForHostTime:(double)a0;
- (id)imageBufferForHostTime:(double)a0;
- (id)initWithPVImageBuffer:(id)a0;

@end
