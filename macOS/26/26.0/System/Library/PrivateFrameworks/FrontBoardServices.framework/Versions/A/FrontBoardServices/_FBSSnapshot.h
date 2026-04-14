@class _FBSSnapshotContext, IOSurface, NSString;

@interface _FBSSnapshot : NSObject <BSInvalidatable> {
    struct CGImage { } *_imageRef;
    IOSurface *_nonProtectedSurfaceRef;
    IOSurface *_protectedSurfaceRef;
}

@property (readonly, copy, nonatomic) _FBSSnapshotContext *context;
@property (readonly, nonatomic) BOOL hasProtectedContent;
@property (readonly, nonatomic) IOSurface *IOSurface;
@property (readonly, nonatomic) IOSurface *fallbackIOSurface;
@property (readonly, nonatomic) struct CGImage { } *CGImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSnapshotContext:(id)a0;
- (struct CGSize { double x0; double x1; })_scaledSnapshotSize;
- (void)dealloc;
- (void)_doInvalidate;
- (double)_scale;
- (void)invalidate;
- (BOOL)capture;
- (void)_synchronizedCaptureWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
