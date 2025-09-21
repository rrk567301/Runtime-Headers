@class CSAudioRecordContext, NSString;

@interface CSAudioRecordDeviceIndicator : NSObject

@property (readonly, nonatomic) CSAudioRecordContext *recordContext;
@property (readonly, nonatomic) NSString *deviceId;
@property (readonly, nonatomic) char shouldUseRemoteRecorder;
@property (readonly, nonatomic) unsigned long long streamHandleId;
@property (readonly, nonatomic) char shouldUseSystemDaemonRecorder;

- (void).cxx_destruct;
- (void)updateDeviceId:(id)a0;
- (id)initWithRecordContext:(id)a0 deviceId:(id)a1 shouldUseRemoteRecorder:(char)a2 streamHandleId:(unsigned long long)a3 shouldUseSystemDaemonRecorder:(char)a4;
- (void)updateWithLatestRecordContext:(id)a0;

@end
