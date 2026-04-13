@class CKStoreRequest, SGTInput, CKStoreClient;

@interface FRSuggester : SGTSuggester

@property (retain, nonatomic) SGTInput *input;
@property (retain, nonatomic) CKStoreClient *storeClient;
@property (retain, nonatomic) CKStoreRequest *storeRequest;

- (void).cxx_destruct;
- (id)initWithStoreClient:(id)a0;
- (void)_getHints;

@end
