@interface AVCompositionFormatReaderInspector : AVFormatReaderInspector

- (BOOL)isComposable;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isPlayable;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isExportable;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (BOOL)isReadable;

@end
