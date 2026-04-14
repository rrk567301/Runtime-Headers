@class NSString;

@interface LBLocalSpeechDetectionUpdates : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long messageHash;
@property (readonly, nonatomic) NSString *lastTRPCandidateId;
@property (readonly, nonatomic) BOOL speechDetected;
@property (readonly, nonatomic) BOOL isSameUser;
@property (readonly, nonatomic) BOOL isInvocationUser;
@property (readonly, nonatomic) BOOL didDetectPostVTSilence;
@property (readonly, nonatomic) BOOL didTRPArrivalTimeout;
@property (readonly, nonatomic) BOOL noSpeechTokensDetectedInRequest;
@property (readonly, nonatomic) BOOL minSpeechEventThresholdMet;
@property (readonly, nonatomic) BOOL longFormSpeechEventThresholdMet;
@property (readonly, nonatomic) BOOL maxSpeechEventThresholdMet;
@property (readonly, nonatomic) BOOL noTRPArrivalThresholdMet;
@property (readonly, nonatomic) BOOL mitigationTrailingSilenceThresholdMet;
@property (readonly, nonatomic) BOOL isManualMode;
@property (readonly, nonatomic) long long processedAudioDurationMs;

+ (id)builder;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)_computeMessageHash;
- (id)initWithLastTRPCandidateId:(id)a0 speechDetected:(BOOL)a1 isSameUser:(BOOL)a2 isInvocationUser:(BOOL)a3 didDetectPostVTSilence:(BOOL)a4 didTRPArrivalTimeout:(BOOL)a5 noSpeechTokensDetectedInRequest:(BOOL)a6 minSpeechEventThresholdMet:(BOOL)a7 longFormSpeechEventThresholdMet:(BOOL)a8 maxSpeechEventThresholdMet:(BOOL)a9 noTRPArrivalThresholdMet:(BOOL)a10 mitigationTrailingSilenceThresholdMet:(BOOL)a11 isManualMode:(BOOL)a12 processedAudioDurationMs:(long long)a13;
- (id)toBuilder;

@end
