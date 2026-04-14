@class _PASLock, NSObject;
@protocol OS_dispatch_queue;

@interface TRIAggregateFetchRecordsProgress : NSObject {
    id /* block */ _progress;
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
}

- (double)_fractionCompletedWithGuardedData:(id)a0;
- (double)fractionCompleted;
- (id)initWithProgressBlockForTesting:(id /* block */)a0 guardedData:(id)a1 lock:(id)a2 dispatchQueue:(id)a3;
- (void)unregisterRecordId:(id)a0;
- (void).cxx_destruct;
- (void)setFractionCompleted:(double)a0 forMAAsset:(id)a1;
- (void)registerMAAsset:(id)a0 withExpectedSize:(unsigned long long)a1;
- (void)_issueCurrentProgressWithGuardedData:(id)a0;
- (void)setComplete;
- (void)registerRecordId:(id)a0 withExpectedSize:(unsigned long long)a1;
- (void)setFractionCompleted:(double)a0 forRecordId:(id)a1;
- (id)initWithProgressBlock:(id /* block */)a0;
- (void)unregisterMAAsset:(id)a0;

@end
