@interface AVCompositionFormatReaderInspector : AVFormatReaderInspector

- (BOOL)isPlayable;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (BOOL)isComposable;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isExportable;
- (BOOL)isReadable;

@end
