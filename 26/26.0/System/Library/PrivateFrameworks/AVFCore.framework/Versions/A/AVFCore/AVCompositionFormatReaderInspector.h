@interface AVCompositionFormatReaderInspector : AVFormatReaderInspector

- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isComposable;
- (BOOL)isPlayable;
- (BOOL)isExportable;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isReadable;

@end
