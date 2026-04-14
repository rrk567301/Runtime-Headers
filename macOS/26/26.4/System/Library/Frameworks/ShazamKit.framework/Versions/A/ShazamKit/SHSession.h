@class SHSignatureBatchMatcher, SHCatalog, NSString;
@protocol SHMatcher, SHSessionDriver, SHSessionDelegate;

@interface SHSession : NSObject <SHMatcherDelegate, SHSessionDriverDelegate>

@property (readonly) id<SHMatcher> matcher;
@property (readonly) id<SHSessionDriver> sessionDriver;
@property (retain) SHSignatureBatchMatcher *signatureBatchMatcher;
@property (copy, nonatomic) id /* block */ sessionResponseCallback;
@property (readonly) SHCatalog *catalog;
@property (weak) id<SHSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fetchPendingRematchSignaturesWithCompletionHandler:(id /* block */)a0;
+ (void)rematchedResultsWithCompletionHandler:(id /* block */)a0;
+ (void)removeRematchedResults:(id)a0 completionHandler:(id /* block */)a1;
+ (void)scheduleRematchNotificationWithResults:(id)a0 completionHandler:(id /* block */)a1;

- (void)matchSignature:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithCatalog:(id)a0;
- (void)handleCommonActionsForResponse:(id)a0;
- (BOOL)_isSessionDriverSignature:(id)a0;
- (BOOL)_shouldNotifySessionFinishedForResponse:(id)a0;
- (BOOL)_shouldRejectSignature:(id)a0;
- (void)didCalculateSpectralData:(id)a0;
- (id)initWithCatalog:(id)a0 matcher:(id)a1 sessionDriver:(id)a2;
- (BOOL)isDurationValidForSignature:(id)a0 error:(id *)a1;
- (void)matchSignatures:(id)a0;
- (void)matchStreamingBuffer:(id)a0 atTime:(id)a1;
- (void)matcher:(id)a0 didProduceResponse:(id)a1;
- (void)sessionDriverEncounteredUnrecoverableError:(id)a0 forSignature:(id)a1;
- (BOOL)shouldGenerateSpectralOutput;
- (BOOL)validateSignature:(id)a0;

@end
