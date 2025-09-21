@class AVCaptionRendererSceneInternal;

@interface AVCaptionRendererScene : NSObject <NSCopying> {
    AVCaptionRendererSceneInternal *_internal;
}

@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly, nonatomic) char hasActiveCaptions;
@property (readonly, nonatomic) char needsPeriodicRefresh;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)initWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 hasActiveCaptions:(char)a1 needsPeriodicRefresh:(char)a2;

@end
