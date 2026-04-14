@interface VCPTextTokenizerT5 : VCPTextTokenizer {
    struct unique_ptr<sentencepiece::SentencePieceProcessor, std::default_delete<sentencepiece::SentencePieceProcessor>> { struct SentencePieceProcessor *__ptr_; } _processor;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (id)encode:(id)a0;

@end
