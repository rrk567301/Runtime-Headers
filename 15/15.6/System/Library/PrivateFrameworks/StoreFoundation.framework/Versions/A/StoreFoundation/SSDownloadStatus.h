@class NSError, SSDownloadPhase;

@interface SSDownloadStatus : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSError *error;
@property (nonatomic, getter=isFailed) char failed;
@property (nonatomic, getter=isPaused) char paused;
@property (nonatomic, getter=isCancelled) char cancelled;
@property (readonly, nonatomic, getter=isPausable) char pausable;
@property char waiting;
@property (readonly, nonatomic) SSDownloadPhase *activePhase;
@property (readonly, nonatomic) float percentComplete;
@property (readonly, nonatomic) float phasePercentComplete;
@property (readonly, nonatomic) long long phaseTimeRemaining;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setOperationProgress:(id)a0;

@end
