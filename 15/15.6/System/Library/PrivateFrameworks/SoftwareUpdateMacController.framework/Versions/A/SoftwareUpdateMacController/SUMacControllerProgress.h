@class NSString;

@interface SUMacControllerProgress : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *phase;
@property (readonly, nonatomic) char isStalled;
@property (readonly, nonatomic) float portionComplete;
@property (readonly, nonatomic) long long totalWrittenBytes;
@property (readonly, nonatomic) long long totalExpectedBytes;
@property (readonly, nonatomic) double estimatedTimeRemaining;

+ (id)_progressStateForControllerStateTable;
+ (id)nameForProgressState:(int)a0;
+ (int)progressStateForControllerState:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isReady;
- (char)isDownloaded;
- (char)isDownloading;
- (char)isLoading;
- (char)isPrepared;
- (int)stateForProgress;
- (id)initFromSUCoreProgress:(id)a0;
- (id)initWithPhase:(id)a0 isStalled:(char)a1 portionComplete:(float)a2 remaining:(double)a3;
- (id)initWithPhase:(id)a0 isStalled:(char)a1 portionComplete:(float)a2 totalWrittenBytes:(long long)a3 totalExpectedBytes:(long long)a4 remaining:(double)a5;
- (char)isApplied;
- (char)isApplying;
- (char)isCancelling;
- (char)isPreflighted;
- (char)isPreparing;
- (char)isStartingUp;

@end
