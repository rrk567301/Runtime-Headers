@class NSURL, NSObject, NSFileHandle;
@protocol OS_dispatch_queue;

@interface WBSFifoTestResults : NSObject <WBSTestResults> {
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly, nonatomic) NSURL *fifoURL;
@property (readonly, nonatomic) NSFileHandle *fifoHandle;

+ (id)readReportFromFifoHandle:(id)a0 error:(id *)a1;
+ (BOOL)createFifoAtFileURL:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)flushWithCompletionHandler:(id /* block */)a0;
- (void)_writeReportToFifo:(id)a0;
- (void)beginTest:(id)a0 inBundle:(id)a1;
- (void)endTest:(id)a0 inBundle:(id)a1;
- (id)initWithFifoURL:(id)a0 error:(id *)a1;
- (void)reportActualResults:(id)a0 expectedResults:(id)a1 expectedResultsName:(id)a2 uniformTypeIdentifier:(id)a3 forStage:(id)a4 forTest:(id)a5 inBundle:(id)a6;
- (void)reportError:(id)a0 forStage:(id)a1 forTest:(id)a2 inBundle:(id)a3;
- (void)reportPerformance:(id)a0 forStage:(id)a1 forTest:(id)a2 inBundle:(id)a3;

@end
