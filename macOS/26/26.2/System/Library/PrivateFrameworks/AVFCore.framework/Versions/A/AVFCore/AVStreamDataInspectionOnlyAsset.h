@interface AVStreamDataInspectionOnlyAsset : AVURLAsset

- (BOOL)isComposable;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (BOOL)isReadable;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (BOOL)isExportable;
- (BOOL)isPlayable;
- (BOOL)isCompatibleWithSavedPhotosAlbum;

@end
