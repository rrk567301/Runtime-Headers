@class _PASLock, NSObject;
@protocol OS_dispatch_queue;

@interface TRIAggregateFetchRecordsProgress : NSObject {
    id /* block */ _progress;
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)_issueCurrentProgressWithGuardedData:(id)a0;
- (void)registerRecordId:(id)a0 withExpectedSize:(unsigned long long)a1;
- (void)setComplete;
- (void)setFractionCompleted:(double)a0 forMAAsset:(id)a1;
- (id)initWithProgressBlock:(id /* block */)a0;
- (double)_fractionCompletedWithGuardedData:(id)a0;
- (id)initWithProgressBlockForTesting:(id /* block */)a0 guardedData:(id)a1 lock:(id)a2 dispatchQueue:(id)a3;
- (void)unregisterRecordId:(id)a0;
- (void)registerMAAsset:(id)a0 withExpectedSize:(unsigned long long)a1;
- (void)unregisterMAAsset:(id)a0;
- (void)setFractionCompleted:(double)a0 forRecordId:(id)a1;
- (double)fractionCompleted;
- (void).cxx_destruct;

@end
