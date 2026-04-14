@interface AVStreamDataInspectionOnlyAsset : AVURLAsset

- (BOOL)isReadable;
- (BOOL)isPlayable;
- (BOOL)isExportable;
- (BOOL)isComposable;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isCompatibleWithAirPlayVideo;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;

@end
