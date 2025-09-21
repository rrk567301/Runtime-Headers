@interface CSUSystemSearchTokenizer : NSObject {
    struct unique_ptr<csu::SentencePieceVocabulary, std::default_delete<csu::SentencePieceVocabulary>> { struct SentencePieceVocabulary *__ptr_; } _vocabulary;
    BOOL _toLower;
    unsigned long long _maximumSequenceLength;
}

@property (readonly, nonatomic) long long revision;

+ (id)SystemSearchTokenizerForRevision:(long long)a0 error:(id *)a1;
+ (id)availableRevisionsForSystemSearchTokenizer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithRevision:(long long)a0 error:(id *)a1;
- (unsigned long long)getMaxTokenLength;
- (id)getTokenIDsForText:(id)a0;
- (id)getTokensForText:(id)a0;

@end
