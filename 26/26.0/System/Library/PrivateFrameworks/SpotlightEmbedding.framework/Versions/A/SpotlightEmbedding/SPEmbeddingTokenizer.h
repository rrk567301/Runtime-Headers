@class CSUTokenizer, NSObject;
@protocol OS_dispatch_queue;

@interface SPEmbeddingTokenizer : NSObject {
    CSUTokenizer *_tokenizer;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) unsigned long long maxTokenLength;

+ (id)sharedInstance;
+ (id)log;

- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (id)getTokenIDsForText:(id)a0;
- (id)getTokensForText:(id)a0;
- (void)initTokenizer;

@end
