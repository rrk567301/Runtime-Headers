@class NSHMDIOSurfaceSession, IOSurface, NSSLSHMDDrawable;

@interface NSHMDIOSurfaceDrawable : NSObject {
    NSHMDIOSurfaceSession *_session;
    NSSLSHMDDrawable *_drawable;
    double _inputTimestamp;
    double _presentedTime;
}

@property (readonly) NSHMDIOSurfaceSession *session;
@property (readonly) IOSurface *IOSurface;
@property double inputTimeStamp;
@property unsigned long long debugSignpost;
@property (readonly) double presentedTime;

- (void)dealloc;
- (id)initWithSession:(id)a0 SLSHMDDrawable:(id)a1;
- (void)presentAtTimestamp:(double)a0;

@end
