@class CKVTokenizer, NSObject;
@protocol CKVSpanMatchResultInterpreter, CKVSpanMatchSearchIndex;

@interface CKVSpanMatcher : NSObject {
    NSObject<CKVSpanMatchSearchIndex> *_searchIndex;
    NSObject<CKVSpanMatchResultInterpreter> *_resultInterpreter;
}

@property (retain) CKVTokenizer *tokenizer;

- (id)init;
- (void).cxx_destruct;
- (void)prewarm;
- (id)_getTokenizer;
- (id)matchSpansWithTokenChain:(id)a0;
- (id)initWithSearchIndex:(id)a0 resultInterpreter:(id)a1;
- (id)matchSpansWithString:(id)a0;

@end
