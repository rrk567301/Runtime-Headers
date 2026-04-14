@interface SPSentencePieceModel : NSObject {
    struct __SPSentencePieceProcessorWrapper { } *_processor;
}

- (void)dealloc;
- (id)initWithModelPath:(id)a0;
- (id)encodeAsIDsFrom:(id)a0;
- (id)decodeFromIDs:(id)a0;
- (id)decodeFromTokens:(id)a0;
- (id)encodeAsTokensFrom:(id)a0;
- (BOOL)isByte:(long long)a0;
- (long long)idFrom:(id)a0;
- (id)decodeFromIDs:(id)a0 error:(id *)a1;
- (id)decodeFromTokens:(id)a0 error:(id *)a1;
- (id)encodeAsIDsFrom:(id)a0 error:(id *)a1;
- (id)encodeAsTokensFrom:(id)a0 error:(id *)a1;
- (id)initWithModelPath:(id)a0 error:(id *)a1;
- (id)pieceFrom:(long long)a0;
- (long long)pieceSize;

@end
