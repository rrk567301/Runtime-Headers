@class CKUploadRequestMetadata;

@interface CKRequestAssetOperation : NSOperation

@property (retain, nonatomic) CKUploadRequestMetadata *metadata;
@property (copy, nonatomic) id /* block */ requestCallback;
@property long long state;
@property (copy, nonatomic) id /* block */ assetRequestCompletionBlock;

- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)start;
- (void).cxx_destruct;
- (id)initWithAssetMetadata:(id)a0 requestCallback:(id /* block */)a1;

@end
