@class PHMediaFormatConversionJob, NSURL, NSMutableArray, NSObject;
@protocol PHMediaFormatConversionImplementation, OS_dispatch_queue;

@interface PHMediaFormatConversionManager : NSObject {
    id /* block */ _transferBehaviorUserPreferenceOverride;
}

@property unsigned long long state;
@property (retain) NSObject<PHMediaFormatConversionImplementation> *conversionImplementation;
@property (retain) NSMutableArray *queuedJobs;
@property (retain) PHMediaFormatConversionJob *currentlyProcessingJob;
@property (retain) NSObject<OS_dispatch_queue> *stateQueue;
@property (retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain) NSObject<OS_dispatch_queue> *preflightQueue;
@property (retain, nonatomic) NSURL *directoryForTemporaryFiles;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)preflightConversionRequest:(id)a0;
- (void)enqueueConversionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)ut_objectsToBeDeallocatedWithReceiver;
- (void)setupConversionImplementation;
- (void)preflightConversionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)configureTransferBehaviorUserPreferenceForRequest:(id)a0;
- (void)setTransferBehaviorUserPreferenceOverride:(id /* block */)a0;
- (void)processQueuedJobs;
- (void)performConversionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)validateLivePhotoPairingIdentifierConfigurationForRequest:(id)a0;
- (void)preflightAllRelatedRequestsForCurrentJob;
- (id)rootAncestorRequestForRequest:(id)a0;
- (id)jobForConversionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancellationRequestedForJob:(id)a0;

@end
