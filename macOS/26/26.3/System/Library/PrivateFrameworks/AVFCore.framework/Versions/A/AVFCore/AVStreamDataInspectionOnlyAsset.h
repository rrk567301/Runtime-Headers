@interface AVStreamDataInspectionOnlyAsset : AVURLAsset

- (BOOL)isPlayable;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (BOOL)isComposable;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isCompatibleWithAirPlayVideo;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (BOOL)isExportable;
- (BOOL)isReadable;

@end
