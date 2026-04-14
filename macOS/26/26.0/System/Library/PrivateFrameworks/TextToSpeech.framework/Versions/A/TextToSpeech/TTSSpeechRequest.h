@class TTSSpeechVoice, NSString, AVSpeechSynthesisProviderVoice, NSArray, NSDictionary, NSObject;
@protocol OS_voucher;

@interface TTSSpeechRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *jobIdentifier;
@property (retain, nonatomic) TTSSpeechVoice *voice;
@property (nonatomic) unsigned long long speechStringType;
@property (copy, nonatomic) AVSpeechSynthesisProviderVoice *synthesisProviderVoice;
@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) long long gender;
@property (nonatomic) double rate;
@property (nonatomic) double pitch;
@property (nonatomic) double volume;
@property (nonatomic) unsigned int audioDeviceId;
@property (nonatomic) BOOL maintainsInput;
@property (nonatomic) BOOL audioSessionIDIsValid;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) unsigned int audioQueueFlags;
@property (nonatomic) double latency;
@property (nonatomic) double dispatchTime;
@property (nonatomic) double handledTime;
@property (retain, nonatomic) NSArray *channels;
@property (nonatomic) void *clientContext;
@property (copy, nonatomic) id /* block */ audioBufferCallback;
@property (copy, nonatomic) id /* block */ latencyCallback;
@property (nonatomic) BOOL synthesizeSilently;
@property (nonatomic) BOOL ignoreSubstitutions;
@property (retain, nonatomic) NSObject<OS_voucher> *voucher;
@property (retain, nonatomic) NSDictionary *voiceSettings;
@property (nonatomic) BOOL sentSpeechDone;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
