@protocol NSProgressPublisher;

@interface _NSProgressProxy : NSProgress {
    id<NSProgressPublisher> _forwarder;
    BOOL _isOld;
    id /* block */ _unpublishingHandler;
}

- (void)setKind:(id)a0;
- (void)pause;
- (id)fileURL;
- (void)setCancellationHandler:(id /* block */)a0;
- (void)resignCurrent;
- (void)setCompletedUnitCount:(long long)a0;
- (void)dealloc;
- (void)prioritize;
- (void)cancel;
- (void)setUserInfoObject:(id)a0 forKey:(id)a1;
- (void)resume;
- (void)setPausable:(BOOL)a0;
- (void)publish;
- (void)setTotalUnitCount:(long long)a0;
- (void)setFileURL:(id)a0;
- (void)setCancellable:(BOOL)a0;
- (double)fractionCompleted;
- (void)becomeCurrentWithPendingUnitCount:(long long)a0;
- (void)setLocalizedDescription:(id)a0;
- (void)setPrioritizable:(BOOL)a0;
- (void)_setRemoteUserInfoValue:(id)a0 forKey:(id)a1;
- (void)_acknowledgeWithSuccess:(BOOL)a0;
- (id)_initWithForwarder:(id)a0 values:(id)a1 isOld:(BOOL)a2;
- (void)_invokePublishingHandler:(id /* block */)a0;
- (void)_invokeUnpublishingHandler;
- (void)_setRemoteValues:(id)a0 forKeys:(id)a1;
- (void)acknowledgeWithSuccess:(BOOL)a0;
- (id)byteCompletedCount;
- (id)byteTotalCount;
- (id)estimatedTimeRemaining;
- (id)fileCompletedCount;
- (id)fileOperationKind;
- (id)fileTotalCount;
- (BOOL)isOld;
- (void)setByteCompletedCount:(id)a0;
- (void)setByteTotalCount:(id)a0;
- (void)setEstimatedTimeRemaining:(id)a0;
- (void)setFileCompletedCount:(id)a0;
- (void)setFileOperationKind:(id)a0;
- (void)setFileTotalCount:(id)a0;
- (void)setPausingHandler:(id /* block */)a0;
- (void)setPrioritizationHandler:(id /* block */)a0;
- (void)setThroughput:(id)a0;
- (id)throughput;
- (void)unpublish;

@end
