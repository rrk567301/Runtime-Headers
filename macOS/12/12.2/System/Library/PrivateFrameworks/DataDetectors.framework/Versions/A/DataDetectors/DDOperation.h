@class NSString, NSArray, DDThreadManager;
@protocol DDOperationDelegate;

@interface DDOperation : NSOperation {
    id<DDOperationDelegate> _delegate;
    DDThreadManager *_threadManager;
    struct __DDScanQuery { } *_query;
    long long _jobIdentifier;
}

@property (copy) NSString *scannedTextID;
@property (weak) id viewOrController;
@property (retain) NSArray *results;
@property int tag;
@property int failuresCount;

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (void)_scanDone;
- (void)setScanQuery:(struct __DDScanQuery { } *)a0;
- (id)initWithQuery:(struct __DDScanQuery { } *)a0 threadManager:(id)a1;
- (void)postOperationCleanUp;
- (void)scan;
- (struct __DDScanQuery { } *)scanQuery;
- (id)initWithDocument:(id)a0 threadManager:(id)a1;

@end
