@class NSString;

@interface SUCoreProgress : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *phase;
@property (nonatomic) char isStalled;
@property (nonatomic) float portionComplete;
@property (nonatomic) long long totalWrittenBytes;
@property (nonatomic) long long totalExpectedBytes;
@property (nonatomic) double estimatedTimeRemaining;
@property (retain, nonatomic) NSString *actionText;
@property (nonatomic) char disableVerboseLogging;
@property (retain, nonatomic) NSString *taskDescription;

- (id)copy;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initWithPhase:(id)a0 isStalled:(char)a1 portionComplete:(float)a2 remaining:(double)a3;
- (id)initWithPhase:(id)a0 isStalled:(char)a1 portionComplete:(float)a2 totalWrittenBytes:(long long)a3 totalExpectedBytes:(long long)a4 remaining:(double)a5;
- (id)initWithPhase:(id)a0 isStalled:(char)a1 portionComplete:(float)a2 remaining:(double)a3 actionText:(id)a4;
- (id)initWithPhase:(id)a0 isStalled:(char)a1 portionComplete:(float)a2 totalWrittenBytes:(long long)a3 totalExpectedBytes:(long long)a4 remaining:(double)a5 actionText:(id)a6 taskDescription:(id)a7;
- (id)initWithPhase:(id)a0 isStalled:(char)a1 portionComplete:(float)a2 totalWrittenBytes:(long long)a3 totalExpectedBytes:(long long)a4 remaining:(double)a5 taskDescription:(id)a6;
- (char)sameProgress:(id)a0 isStalled:(char)a1 portion:(float)a2 remaining:(double)a3;
- (char)sameProgress:(id)a0 isStalled:(char)a1 portion:(float)a2 remaining:(double)a3 actionText:(id)a4;

@end
