@interface AVStreamDataInspectionOnlyAsset : AVURLAsset

- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isPlayable;
- (BOOL)isComposable;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isExportable;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (BOOL)isReadable;

@end
