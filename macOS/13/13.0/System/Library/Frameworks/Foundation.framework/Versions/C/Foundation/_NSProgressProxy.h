@protocol NSProgressPublisher;

@interface _NSProgressProxy : NSProgress {
    id<NSProgressPublisher> _forwarder;
    BOOL _isOld;
    id /* block */ _unpublishingHandler;
}

- (void)dealloc;
- (void)resume;
- (id)fileURL;
- (void)pause;
- (double)fractionCompleted;
- (void)setTotalUnitCount:(long long)a0;
- (void)setUserInfoObject:(id)a0 forKey:(id)a1;
- (void)setCancellable:(BOOL)a0;
- (void)setPausable:(BOOL)a0;
- (void)setCompletedUnitCount:(long long)a0;
- (void)setPrioritizable:(BOOL)a0;
- (void)setCancellationHandler:(id /* block */)a0;
- (void)cancel;
- (id)estimatedTimeRemaining;
- (void)setEstimatedTimeRemaining:(id)a0;
- (id)throughput;
- (void)setThroughput:(id)a0;
- (id)fileTotalCount;
- (void)setFileTotalCount:(id)a0;
- (id)fileCompletedCount;
- (void)setFileCompletedCount:(id)a0;
- (void)becomeCurrentWithPendingUnitCount:(long long)a0;
- (void)resignCurrent;
- (void)prioritize;
- (void)setLocalizedDescription:(id)a0;
- (void)setPausingHandler:(id /* block */)a0;
- (id)fileOperationKind;
- (void)setFileOperationKind:(id)a0;
- (void)setFileURL:(id)a0;
- (id)byteTotalCount;
- (void)setByteTotalCount:(id)a0;
- (id)byteCompletedCount;
- (void)setByteCompletedCount:(id)a0;
- (void)setKind:(id)a0;
- (void)publish;
- (void)unpublish;
- (void)acknowledgeWithSuccess:(BOOL)a0;
- (BOOL)isOld;
- (void)setPrioritizationHandler:(id /* block */)a0;
- (void)_setRemoteUserInfoValue:(id)a0 forKey:(id)a1;
- (void)_setRemoteValues:(id)a0 forKeys:(id)a1;
- (id)_initWithForwarder:(id)a0 values:(id)a1 isOld:(BOOL)a2;
- (void)_invokePublishingHandler:(id /* block */)a0;
- (void)_invokeUnpublishingHandler;
- (void)_acknowledgeWithSuccess:(BOOL)a0;

@end
