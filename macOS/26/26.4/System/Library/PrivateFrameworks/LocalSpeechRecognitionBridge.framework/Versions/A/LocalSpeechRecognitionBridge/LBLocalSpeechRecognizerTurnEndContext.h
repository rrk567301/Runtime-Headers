@class NSString;

@interface LBLocalSpeechRecognizerTurnEndContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *requestId;
@property (readonly, nonatomic) NSString *trpId;
@property (readonly, nonatomic) NSString *selectedTrpId;
@property (readonly, nonatomic) unsigned long long turnEndReason;
@property (readonly, nonatomic) double processedAudioDuration;
@property (readonly, nonatomic) double trailingSilenceDurationMs;

+ (id)turnEndReasonString:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestId:(id)a0 selectedTrpId:(id)a1;
- (id)initWithRequestId:(id)a0 selectedTrpId:(id)a1 turnEndReason:(unsigned long long)a2 processedAudioDuration:(double)a3 trailingSilenceDurationMs:(double)a4;
- (id)initWithRequestId:(id)a0 trpId:(id)a1 turnEndReason:(unsigned long long)a2 processedAudioDuration:(double)a3 trailingSilenceDurationMs:(double)a4;

@end
