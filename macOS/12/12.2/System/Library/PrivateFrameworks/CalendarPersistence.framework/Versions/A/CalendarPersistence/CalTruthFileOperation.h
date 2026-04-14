@class NSArray;

@interface CalTruthFileOperation : NSOperation {
    NSArray *_methods;
    BOOL _disabledSuddenTermination;
}

+ (id)operationWithMethods:(id)a0;

- (void)finalize;
- (void)dealloc;
- (void).cxx_destruct;
- (void)main;
- (id)initWithMethods:(id)a0;
- (void)_enableSuddenTerminationIfNeeded;

@end
