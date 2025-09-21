@class BRMangledID;

@interface BRCSyncOperationThrottle : NSObject <NSSecureCoding> {
    char _graceNextRequest;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) double nextTry;
@property (readonly, nonatomic) char isSyncDown;
@property (readonly, nonatomic) int lastErrorKind;
@property (retain, nonatomic) BRMangledID *mangledID;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)clear;
- (void)updateForError:(id)a0;
- (void)graceNextRequest;
- (id)initWithMangledID:(id)a0 isSyncDown:(char)a1;
- (char)scheduleIfPossibleWithCurrentTimestamp:(long long)a0 signalSourceIfFailed:(id)a1 description:(id)a2;
- (void)updateAfterSchedulingTask;
- (void)updateAfterSchedulingTaskWithMinimumDelay:(double)a0;
- (char)updateForClearingOutOfQuota;

@end
