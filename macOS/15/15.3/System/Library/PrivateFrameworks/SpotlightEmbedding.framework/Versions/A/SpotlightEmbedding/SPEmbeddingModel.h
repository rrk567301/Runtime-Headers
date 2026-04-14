@class NSObject, NSMutableDictionary, MADService;
@protocol OS_dispatch_queue;

@interface SPEmbeddingModel : NSObject {
    MADService *_service;
    NSMutableDictionary *_requestIDs;
    NSMutableDictionary *_queryIDs;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) BOOL deviceCanGenerateEmbeddings;
@property (readonly, nonatomic) BOOL hardwareSupportsEmbedding;

+ (id)sharedInstance;
+ (unsigned long long)version;
+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (id)_processText:(id)a0;
- (void)cancelRequestID:(int)a0;
- (void)preheatWithCompletionHandler:(id /* block */)a0;
- (void)cancelQueryID:(long long)a0;
- (id)generateEmbeddingForTextInputs:(id)a0 extendedContextLength:(BOOL)a1 queryID:(long long)a2 timeout:(long long)a3 useCLIPSafety:(BOOL)a4 workCost:(long long *)a5 error:(id *)a6;
- (void)_initModel;
- (id)_processAttributedString:(id)a0;
- (id)_processTextInputs:(id)a0 error:(id *)a1;
- (id)_processTokenIDs:(id)a0;
- (void)clearQueryID:(long long)a0 requestID:(int)a1;
- (id)generateEmbeddingForTextInputs:(id)a0 extendedContextLength:(BOOL)a1 bundleID:(id)a2 queryID:(long long)a3 timeout:(long long)a4 useCLIPSafety:(BOOL)a5 workCost:(long long *)a6 error:(id *)a7;
- (id)generateEmbeddingForTextInputs:(id)a0 extendedContextLength:(BOOL)a1 bundleID:(id)a2 queryID:(long long)a3 timeout:(long long)a4 workCost:(long long *)a5 error:(id *)a6;
- (id)generateEmbeddingForTextInputs:(id)a0 extendedContextLength:(BOOL)a1 queryID:(long long)a2 timeout:(long long)a3 error:(id *)a4;
- (id)generateEmbeddingForTextInputs:(id)a0 extendedContextLength:(BOOL)a1 queryID:(long long)a2 timeout:(long long)a3 workCost:(long long *)a4 error:(id *)a5;

@end
