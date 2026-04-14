@class PKPackageSpecifier, PKPayloadCopier, NSObject;
@protocol OS_dispatch_queue;

@interface PKExtractInstallOperation : PKInstallOperation {
    unsigned long long _payloadBytesCompleted;
    unsigned long long _totalPayloadSize;
    unsigned long long _informedExtractionSpeed;
    PKPackageSpecifier *_currentPackageSpecifier;
    PKPayloadCopier *_activeExtractor;
    NSObject<OS_dispatch_queue> *_updateQueue;
}

- (void)dealloc;
- (int)installState;
- (void)cancel;
- (void)main;
- (double)estimatedTimeRemaining;
- (id)messageTracerDomain;
- (id)messageTracerComment;
- (id)currentPackageSpecifier;
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2;
- (void)_clearQuarantineStateForPackage:(id)a0;
- (void)_setActiveExtractor:(id)a0;
- (id)_activeExtractor;
- (BOOL)_extractBomForPackageSpecifier:(id)a0 error:(id *)a1;
- (BOOL)_extractScriptsForPackageSpecifier:(id)a0 error:(id *)a1;
- (BOOL)_extractPayloadForPackageSpecifier:(id)a0 error:(id *)a1;
- (BOOL)_extractAllSpecifiersOnceAndReturnFailingSpecifier:(id *)a0 andError:(id *)a1;

@end
