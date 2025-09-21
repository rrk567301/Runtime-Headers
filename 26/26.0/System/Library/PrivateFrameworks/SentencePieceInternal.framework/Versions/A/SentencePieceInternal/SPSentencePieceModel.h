@interface SPSentencePieceModel : NSObject {
    struct __SPSentencePieceProcessorWrapper { } *_processor;
}

- (void)dealloc;
- (id)initWithModelURL:(id)a0 error:(id *)a1;
- (id)initWithModelPath:(id)a0;
- (BOOL)isUnknown:(long long)a0;
- (id)encodeAsIDsFrom:(id)a0;
- (id)decodeFromIDs:(id)a0;
- (id)decodeFromTokens:(id)a0;
- (id)encodeAsTokensFrom:(id)a0;
- (BOOL)addsDummyPrefix;
- (long long)idFrom:(id)a0;
- (id)decodeAsTextFromTokens:(id)a0 error:(id *)a1;
- (id)decodeAsTextFromIDs:(id)a0 error:(id *)a1;
- (BOOL)isByte:(long long)a0;
- (id)decodeFromIDs:(id)a0 error:(id *)a1;
- (id)decodeFromTokens:(id)a0 error:(id *)a1;
- (id)encodeAsIDsFrom:(id)a0 error:(id *)a1;
- (id)encodeAsIDsFromText:(id)a0 error:(id *)a1;
- (id)encodeAsTokensFrom:(id)a0 error:(id *)a1;
- (id)encodeAsTokensFromText:(id)a0 error:(id *)a1;
- (void)enumerateEntriesForPredictiveSearch:(id)a0 shouldMatchAfterDecoding:(BOOL)a1 usingBlock:(id /* block */)a2;
- (void)enumerateEntriesForPredictiveSearch:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateEntriesWithCommonPrefix:(id)a0 shouldMatchAfterDecoding:(BOOL)a1 usingBlock:(id /* block */)a2;
- (void)enumerateEntriesWithCommonPrefix:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithModelPath:(id)a0 error:(id *)a1;
- (BOOL)isControl:(long long)a0;
- (long long)longestPieceLength;
- (id)normalize:(id)a0 error:(id *)a1;
- (id)pieceFrom:(long long)a0;
- (long long)pieceSize;
- (id)pieces;
- (BOOL)removesExtraWhitespaces;

@end
