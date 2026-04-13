@class PKInstallRequest, NSError, NSNumber, PKInstallSandbox, PKInstallAnalyzer, NSDate;

@interface PKInstallOperation : NSOperation {
    NSNumber *_originalEstimate;
    NSDate *_packageStartDate;
}

@property (readonly) PKInstallRequest *request;
@property (readonly) PKInstallSandbox *sandbox;
@property (readonly, retain) PKInstallAnalyzer *analyzer;
@property (readonly, retain) NSDate *startDate;
@property double totalEstimatedTime;
@property (retain) NSError *error;

- (void)dealloc;
- (id)description;
- (void)start;
- (int)installState;
- (double)estimatedTimeRemaining;
- (id)currentPackageSpecifier;
- (void)logResult:(long long)a0;
- (id)messageTracerDomain;
- (id)messageTracerComment;
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2;
- (id)completionSummary;
- (id)currentPackage;
- (id)messageTracerTernarySignature;
- (BOOL)installingToAtLeastVersion:(id)a0 lookForSystemVersionInSandbox:(BOOL)a1;

@end
