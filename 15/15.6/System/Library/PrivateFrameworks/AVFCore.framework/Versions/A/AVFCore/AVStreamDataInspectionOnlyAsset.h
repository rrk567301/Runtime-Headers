@interface AVStreamDataInspectionOnlyAsset : AVURLAsset

- (char)isReadable;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (char)isCompatibleWithAirPlayVideo;
- (char)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (char)isCompatibleWithSavedPhotosAlbum;
- (char)isComposable;
- (char)isExportable;
- (char)isPlayable;

@end
