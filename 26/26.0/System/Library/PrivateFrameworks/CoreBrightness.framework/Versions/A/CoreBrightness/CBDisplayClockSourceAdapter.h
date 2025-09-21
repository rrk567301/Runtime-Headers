@class NSString;

@interface CBDisplayClockSourceAdapter : NSObject <CBClockSource> {
    struct __Display { } *_display;
    float _preferredFramesPerSecond;
    BOOL _running;
}

@property (readonly, nonatomic) unsigned long long nextFrameTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pause;
- (void)setPreferredFramesPerSecond:(float)a0;
- (void)invalidate;
- (void)resume;
- (id)initWithDisplayRef:(struct __Display { } *)a0;
- (void)scheduleWithDispatchQueue:(id)a0;
- (void)setFrameNotificationBlock:(id /* block */)a0;

@end
