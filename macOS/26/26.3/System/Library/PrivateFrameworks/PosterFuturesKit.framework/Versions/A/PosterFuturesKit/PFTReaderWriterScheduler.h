@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface PFTReaderWriterScheduler : NSObject <BSDescriptionStreaming, PFTReaderWriterScheduler> {
    long long _suspendedCount;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly, nonatomic) NSMutableSet *activeReaders;
@property (readonly, nonatomic) NSMutableSet *pendingReaders;
@property (readonly, nonatomic) NSMutableSet *activeWriters;
@property (readonly, nonatomic) NSMutableSet *pendingWriters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendDescriptionToStream:(id)a0;
- (id)initWithQueue:(id)a0;
- (void)addReaderWithIdentifier:(id)a0;
- (void)suspend;
- (id)init;
- (void)activateReader:(id)a0;
- (id)performWriterBlock:(id /* block */)a0;
- (void)activateWriter:(id)a0;
- (void)resume;
- (void)performSynchronousWriterBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)performSynchronousReaderBlock:(id /* block */)a0;
- (void)removeWriter:(id)a0;
- (id)performReaderBlock:(id /* block */)a0;
- (void)removeReader:(id)a0;
- (void)addWriterWithIdentifier:(id)a0;

@end
