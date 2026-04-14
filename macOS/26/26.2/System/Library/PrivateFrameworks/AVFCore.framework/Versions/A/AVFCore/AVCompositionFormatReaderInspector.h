@interface AVCompositionFormatReaderInspector : AVFormatReaderInspector

- (BOOL)isComposable;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (BOOL)isReadable;
- (BOOL)isExportable;
- (BOOL)isPlayable;
- (BOOL)isCompatibleWithSavedPhotosAlbum;

@end
