@class OSInstallOptions, NSNumber, NSObject;

@interface OSIInstallQueueElement : NSObject

@property NSObject *delegate;
@property (retain) OSInstallOptions *options;
@property double initialEstimate;
@property double totalProgressPercentage;
@property (retain) NSNumber *timeTakenToComplete;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (id)localizedStatusString;
- (double)estimatedTimeToComplete;
- (void)postTimeRemaining:(double)a0;
- (BOOL)okayToSkip;
- (id)nextProgressPhaseAfterCompletion;
- (id)packagesDirectory;

@end
