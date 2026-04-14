@interface AVCompositionFormatReaderInspector : AVFormatReaderInspector

- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isPlayable;
- (BOOL)isComposable;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isExportable;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (BOOL)isReadable;

@end
