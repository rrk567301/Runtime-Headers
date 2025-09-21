@class CKUploadRequestMetadata;

@interface CKRequestAssetOperation : NSOperation

@property (retain, nonatomic) CKUploadRequestMetadata *metadata;
@property (copy, nonatomic) id /* block */ requestCallback;
@property long long state;
@property (copy, nonatomic) id /* block */ assetRequestCompletionBlock;

- (void).cxx_destruct;
- (void)start;
- (char)isAsynchronous;
- (char)isExecuting;
- (char)isFinished;
- (id)initWithAssetMetadata:(id)a0 requestCallback:(id /* block */)a1;

@end
