@class NSObject, MADSharedTextTokenizer;
@protocol OS_dispatch_queue;

@interface MADTextTokenizerResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    MADSharedTextTokenizer *_tokenizer;
}

@property (readonly, nonatomic) MADSharedTextTokenizer *tokenizer;
@property (readonly, nonatomic) BOOL isTokenizerWarm;

+ (id)sharedResource:(unsigned long long)a0;

- (void)purge;
- (void).cxx_destruct;
- (unsigned long long)version;
- (id)init;
- (long long)activeCost;
- (long long)inactiveCost;

@end
