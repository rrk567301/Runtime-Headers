@interface AVCompositionFormatReaderInspector : AVFormatReaderInspector

- (char)isReadable;
- (char)isCompatibleWithAirPlayVideo;
- (char)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (char)isCompatibleWithSavedPhotosAlbum;
- (char)isComposable;
- (char)isExportable;
- (char)isPlayable;

@end
