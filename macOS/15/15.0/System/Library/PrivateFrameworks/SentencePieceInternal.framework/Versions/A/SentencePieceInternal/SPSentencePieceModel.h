@interface SPSentencePieceModel : NSObject {
    struct __SPSentencePieceProcessorWrapper { } *_processor;
}

- (void)dealloc;
- (id)initWithModelPath:(id)a0;
- (id)encodeAsIDsFrom:(id)a0;
- (id)decodeFromIDs:(id)a0;
- (id)decodeFromTokens:(id)a0;
- (id)encodeAsTokensFrom:(id)a0;

@end
