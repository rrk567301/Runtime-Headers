@class NSString, NSTask, NSFileHandle, NSProgress, NSObject;
@protocol OS_dispatch_queue;

@interface SMTask : NSObject

@property int terminationStatus;
@property (retain) NSFileHandle *outputFileHandle;
@property (retain) NSTask *task;
@property (retain) NSString *logPrefix;
@property double estimatedTimeToComplete;
@property (retain) NSProgress *parentProgress;
@property double parentProgressPendingUnits;
@property (retain) NSObject<OS_dispatch_queue> *parentProgressQueue;

+ (id)sipSanitizedTaskFromTask:(id)a0;

- (BOOL)run;
- (void).cxx_destruct;
- (id)initWithTask:(id)a0;
- (id)initWithTask:(id)a0 allowSIP:(BOOL)a1;
- (void)fileHandleReadCompleted:(id)a0;
- (void)processOutput:(id)a0;
- (void)processRemainingData;

@end
