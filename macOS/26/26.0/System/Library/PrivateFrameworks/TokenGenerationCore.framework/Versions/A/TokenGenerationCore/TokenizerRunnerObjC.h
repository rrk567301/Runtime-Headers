@class NSString, NSObject;
@protocol OS_os_log;

@interface TokenizerRunnerObjC : NSObject {
    struct SentencePieceProcessor { void /* function */ **_vptr$SentencePieceProcessor; struct unique_ptr<sentencepiece::ModelInterface, std::default_delete<sentencepiece::ModelInterface>> { struct ModelInterface *__ptr_; } model_; struct unique_ptr<sentencepiece::normalizer::Normalizer, std::default_delete<sentencepiece::normalizer::Normalizer>> { struct Normalizer *__ptr_; } normalizer_; struct unique_ptr<sentencepiece::normalizer::Normalizer, std::default_delete<sentencepiece::normalizer::Normalizer>> { struct Normalizer *__ptr_; } denormalizer_; struct unique_ptr<sentencepiece::ModelProtoBase, std::default_delete<sentencepiece::ModelProtoBase>> { struct ModelProtoBase *__ptr_; } model_proto_; struct vector<sentencepiece::SentencePieceProcessor::ExtraOption, std::allocator<sentencepiece::SentencePieceProcessor::ExtraOption>> { int *__begin_; int *__end_; int *__cap_; } encode_extra_options_; struct vector<sentencepiece::SentencePieceProcessor::ExtraOption, std::allocator<sentencepiece::SentencePieceProcessor::ExtraOption>> { int *__begin_; int *__end_; int *__cap_; } decode_extra_options_; struct unique_ptr<sentencepiece::Mmap<char>, std::default_delete<sentencepiece::Mmap<char>>> { void *__ptr_; } mmap_; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } mmappable_data_; } _processor;
    NSObject<OS_os_log> *_log;
}

@property (class, readonly, copy) NSString *sentencePieceErrorDomain;

@property (readonly, nonatomic) long long longestTokenLength;
@property (readonly, nonatomic) long long vocabularyCount;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)vocabulary;
- (BOOL)isByte:(long long)a0;
- (id)textForTokenID:(long long)a0;
- (id)tokenize:(id)a0 error:(id *)a1;
- (long long)tokenIDForText:(id)a0;
- (id)detokenize:(id)a0 error:(id *)a1;
- (void)enumeratePrefixTokenIDsForPrefix:(id)a0 block:(id /* block */)a1;
- (void)enumerateTokenIDsForDecodedPrefix:(id)a0 block:(id /* block */)a1;
- (void)enumerateTokenIDsForRawPrefix:(id)a0 block:(id /* block */)a1;
- (id)initWithTokenizerPath:(id)a0 error:(id *)a1;
- (void)prefixMatchesForText:(id)a0 block:(id /* block */)a1;

@end
