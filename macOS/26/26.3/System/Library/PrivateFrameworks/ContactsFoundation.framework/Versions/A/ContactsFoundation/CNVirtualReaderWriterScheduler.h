@class NSString, CNSuspendableSchedulerDecorator;

@interface CNVirtualReaderWriterScheduler : NSObject <CNReaderWriterScheduler>

@property (readonly, nonatomic) CNSuspendableSchedulerDecorator *scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScheduler:(id)a0;
- (void)suspend;
- (id)init;
- (id)performWriterBlock:(id /* block */)a0;
- (void)resume;
- (void)performSynchronousWriterBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)performSynchronousReaderBlock:(id /* block */)a0;
- (id)performReaderBlock:(id /* block */)a0;

@end
