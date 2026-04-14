@interface AVCompositionFormatReaderInspector : AVFormatReaderInspector

- (BOOL)isReadable;
- (BOOL)isPlayable;
- (BOOL)isExportable;
- (BOOL)isComposable;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isCompatibleWithAirPlayVideo;

@end
