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

- (void)clear;
- (void)updateForError:(id)a0;
- (BOOL)scheduleIfPossibleWithCurrentTimestamp:(long long)a0 signalSourceIfFailed:(id)a1 description:(id)a2;
- (BOOL)updateForClearingOutOfQuota;
- (void)encodeWithCoder:(id)a0;
- (void)updateAfterSchedulingTask;
- (id)initWithMangledID:(id)a0 isSyncDown:(BOOL)a1;
- (void)graceNextRequest;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)updateAfterSchedulingTaskWithMinimumDelay:(double)a0;

@end
