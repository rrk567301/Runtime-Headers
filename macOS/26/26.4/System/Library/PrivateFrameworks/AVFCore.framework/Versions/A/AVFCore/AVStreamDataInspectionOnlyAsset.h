@interface AVStreamDataInspectionOnlyAsset : AVURLAsset

- (BOOL)isComposable;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isPlayable;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (BOOL)isExportable;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (BOOL)isReadable;

@end
