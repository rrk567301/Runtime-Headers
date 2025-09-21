@class CSUTextEncoderConfiguration;

@interface CSUTokenizer : NSObject {
    struct unique_ptr<csu::SentencePieceVocabulary, std::default_delete<csu::SentencePieceVocabulary>> { struct SentencePieceVocabulary *__ptr_; } _vocabulary;
    CSUTextEncoderConfiguration *_config;
    BOOL _toLower;
}

@property (readonly, nonatomic) long long revision;
@property (readonly, nonatomic) unsigned long long maxTokenLength;

+ (id)TokenizerForRevision:(long long)a0 error:(id *)a1;
+ (id)availableRevisionsForTokenizer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithRevision:(long long)a0 error:(id *)a1;
- (id)getTextFromTokenIds:(id)a0 error:(id *)a1;
- (id)getTokenIDsForText:(id)a0;
- (id)getTokensForText:(id)a0;

@end
