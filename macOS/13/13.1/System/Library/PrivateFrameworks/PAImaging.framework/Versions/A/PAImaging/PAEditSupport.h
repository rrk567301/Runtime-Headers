@class NSObject;
@protocol OS_dispatch_queue;

@interface PAEditSupport : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;
- (void)shouldCommitComposition:(id)a0 forContentEditingInput:(id)a1 assetContentEditingInput:(id)a2 assetAdjustmentData:(id)a3 queue:(id)a4 completion:(id /* block */)a5;
- (void)renderCompositionForOutput:(id)a0 composition:(id)a1 asset:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)compositionForContentEditingInput:(id)a0 adjustmentData:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)originalCompositionForContentEditingInput:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (BOOL)canHandleAdjustmentData:(id)a0;
- (id)newContentEditingRequestOptions:(id)a0;
- (id)editSourceForContentEditingInput:(id)a0 error:(id *)a1;
- (void)didChangeVideoTrim:(id)a0 forContentEditingInput:(id)a1 assetContentEditingInput:(id)a2 assetAdjustmentData:(id)a3 asset:(id)a4 queue:(id)a5 completion:(id /* block */)a6;
- (id)nameForShouldCommitStatus:(long long)a0;

@end
