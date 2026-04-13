@class CKVTokenizer, NSObject;
@protocol CKVSpanMatchResultInterpreter, CKVSpanMatchSearchIndex;

@interface CKVSpanMatcher : NSObject {
    NSObject<CKVSpanMatchSearchIndex> *_searchIndex;
    NSObject<CKVSpanMatchResultInterpreter> *_resultInterpreter;
}

@property (retain) CKVTokenizer *tokenizer;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSearchIndex:(id)a0 resultInterpreter:(id)a1;
- (id)matchSpansWithTokenChain:(id)a0;
- (id)matchSpansWithString:(id)a0;
- (id)_getTokenizer;

@end
