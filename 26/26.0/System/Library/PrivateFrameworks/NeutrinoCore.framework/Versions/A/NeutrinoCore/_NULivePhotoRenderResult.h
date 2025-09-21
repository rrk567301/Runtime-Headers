@class NUImageGeometry, AVAsset, NSString, AVVideoComposition;
@protocol NURenderStatistics;

@interface _NULivePhotoRenderResult : _NURenderResult <NULivePhotoRenderResult>

@property (retain, nonatomic) AVAsset *video;
@property (retain, nonatomic) AVVideoComposition *videoComposition;
@property (retain, nonatomic) struct CGImage { } *photo;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } photoTime;
@property (retain, nonatomic) NUImageGeometry *videoGeometry;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;

@end
