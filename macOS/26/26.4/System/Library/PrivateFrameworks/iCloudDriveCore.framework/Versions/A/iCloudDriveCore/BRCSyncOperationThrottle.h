@class BRMangledID;

@interface BRCSyncOperationThrottle : NSObject <NSSecureCoding> {
    BOOL _graceNextRequest;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) double nextTry;
@property (readonly, nonatomic) BOOL isSyncDown;
@property (readonly, nonatomic) int lastErrorKind;
@property (retain, nonatomic) BRMangledID *mangledID;

- (BOOL)scheduleIfPossibleWithCurrentTimestamp:(long long)a0 signalSourceIfFailed:(id)a1 description:(id)a2;
- (void)clear;
- (BOOL)updateForClearingOutOfQuota;
- (void)encodeWithCoder:(id)a0;
- (void)graceNextRequest;
- (id)initWithMangledID:(id)a0 isSyncDown:(BOOL)a1;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)updateAfterSchedulingTask;
- (void)updateAfterSchedulingTaskWithMinimumDelay:(double)a0;
- (void)updateForError:(id)a0;

@end
