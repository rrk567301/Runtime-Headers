@interface VCPTextTokenizerT5 : VCPTextTokenizer {
    struct unique_ptr<sentencepiece::SentencePieceProcessor, std::default_delete<sentencepiece::SentencePieceProcessor>> { struct { struct SentencePieceProcessor *__ptr_; } ; } _processor;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)encode:(id)a0;

@end
