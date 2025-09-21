@protocol NSProgressPublisher;

@interface _NSProgressProxy : NSProgress {
    id<NSProgressPublisher> _forwarder;
    char _isOld;
    id /* block */ _unpublishingHandler;
}

- (void)dealloc;
- (void)resume;
- (void)setCancellable:(char)a0;
- (double)fractionCompleted;
- (void)pause;
- (void)setCancellationHandler:(id /* block */)a0;
- (void)setCompletedUnitCount:(long long)a0;
- (void)setPausable:(char)a0;
- (void)setPrioritizable:(char)a0;
- (void)setTotalUnitCount:(long long)a0;
- (void)setUserInfoObject:(id)a0 forKey:(id)a1;
- (void)_setRemoteUserInfoValue:(id)a0 forKey:(id)a1;
- (id)fileURL;
- (void)publish;
- (void)_acknowledgeWithSuccess:(char)a0;
- (id)_initWithForwarder:(id)a0 values:(id)a1 isOld:(char)a2;
- (void)_invokePublishingHandler:(id /* block */)a0;
- (void)_invokeUnpublishingHandler;
- (void)_setRemoteValues:(id)a0 forKeys:(id)a1;
- (void)acknowledgeWithSuccess:(char)a0;
- (void)becomeCurrentWithPendingUnitCount:(long long)a0;
- (id)byteCompletedCount;
- (id)byteTotalCount;
- (void)cancel;
- (id)estimatedTimeRemaining;
- (id)fileCompletedCount;
- (id)fileOperationKind;
- (id)fileTotalCount;
- (char)isOld;
- (void)prioritize;
- (void)resignCurrent;
- (void)setByteCompletedCount:(id)a0;
- (void)setByteTotalCount:(id)a0;
- (void)setEstimatedTimeRemaining:(id)a0;
- (void)setFileCompletedCount:(id)a0;
- (void)setFileOperationKind:(id)a0;
- (void)setFileTotalCount:(id)a0;
- (void)setFileURL:(id)a0;
- (void)setKind:(id)a0;
- (void)setLocalizedDescription:(id)a0;
- (void)setPausingHandler:(id /* block */)a0;
- (void)setPrioritizationHandler:(id /* block */)a0;
- (void)setThroughput:(id)a0;
- (id)throughput;
- (void)unpublish;

@end
