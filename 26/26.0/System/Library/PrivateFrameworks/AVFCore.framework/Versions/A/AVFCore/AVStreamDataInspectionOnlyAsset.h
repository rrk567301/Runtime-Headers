@interface AVStreamDataInspectionOnlyAsset : AVURLAsset

- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isComposable;
- (BOOL)isPlayable;
- (BOOL)isExportable;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isReadable;

@end
