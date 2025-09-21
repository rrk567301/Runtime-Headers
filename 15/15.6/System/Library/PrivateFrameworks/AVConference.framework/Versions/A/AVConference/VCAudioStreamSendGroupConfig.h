@class VCSystemAudioCaptureSession, NSString, VCAudioStreamGroupCommonConfig;

@interface VCAudioStreamSendGroupConfig : VCMediaStreamSendGroupConfig <VCAudioStreamGroupConfig>

@property (retain, nonatomic) VCSystemAudioCaptureSession *systemAudioCaptureSession;
@property (nonatomic) char shouldScheduleMediaQueue;
@property (retain) VCAudioStreamGroupCommonConfig *audioStreamGroupConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;

@end
