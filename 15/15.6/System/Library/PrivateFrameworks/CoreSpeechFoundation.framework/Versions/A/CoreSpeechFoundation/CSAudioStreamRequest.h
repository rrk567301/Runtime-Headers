@class CSAudioRecordContext, NSObject;
@protocol OS_xpc_object;

@interface CSAudioStreamRequest : NSObject <NSCopying>

@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
@property (retain, nonatomic) CSAudioRecordContext *recordContext;
@property (nonatomic) char requiresHistoricalBuffer;
@property (nonatomic) char useCustomizedRecordSettings;
@property (nonatomic) long long audioFormat;
@property (nonatomic) double sampleRate;
@property (nonatomic) unsigned int lpcmBitDepth;
@property (nonatomic) char lpcmIsFloat;
@property (nonatomic) unsigned int numberOfChannels;
@property (nonatomic) unsigned int encoderBitRate;
@property (nonatomic) unsigned long long clientIdentity;
@property (nonatomic) char requestSkipClientMonitorUpdate;
@property (nonatomic) char requestRecordModeLock;
@property (nonatomic) char requestListeningMicIndicatorLock;
@property (nonatomic) char requestExclaveAudio;

+ (id)defaultRequestWithContext:(id)a0;
+ (id)requestForLpcmRecordSettingsWithContext:(id)a0;
+ (id)requestForOpusRecordSettingsWithContext:(id)a0;
+ (id)requestForSpeexRecordSettingsWithContext:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0;
- (id)initTandemWithRequest:(id)a0;

@end
