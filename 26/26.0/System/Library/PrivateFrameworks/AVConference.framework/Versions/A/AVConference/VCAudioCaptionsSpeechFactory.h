@interface VCAudioCaptionsSpeechFactory : NSObject

+ (BOOL)V2SpeechAPIEnabled;
+ (id)captionsProviderForFrameworkType:(unsigned char)a0 withSpeechConfig:(const struct tagVCAudioCaptionsSpeechConfig { id x0; id x1; struct opaqueRTCReporting *x2; BOOL x3; } *)a1;

@end
