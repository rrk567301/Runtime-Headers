@class CSUVisualGenerationTextEncoderV1Configuration;

@interface CSUVisualGenerationTextEncoderV1 : NSObject {
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> { struct EspressoNet *__ptr_; } _tokenEmbeddingNet;
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> { struct EspressoNet *__ptr_; } _textEncoderNet;
    struct unique_ptr<csu::SentencePieceVocabulary, std::default_delete<csu::SentencePieceVocabulary>> { struct SentencePieceVocabulary *__ptr_; } _vocabulary;
}

@property (readonly, nonatomic) CSUVisualGenerationTextEncoderV1Configuration *configuration;

- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)loadResources:(id *)a0;
- (struct unordered_map<std::string, ik::Tensor, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, ik::Tensor>>> { struct __hash_table<std::__hash_value_type<std::string, ik::Tensor>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, ik::Tensor>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, ik::Tensor>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, ik::Tensor>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *>> { unsigned long long x0; } x1; } x0; struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> { void *x0; } x1; unsigned long long x2; float x3; } x0; })_inputTokenTensorsWithTokenIDs:(struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x0; unsigned int *x1; unsigned int *x2; })a0;
- (void)_unsafeRunOnInput:(id)a0 completion:(id /* block */)a1;
- (struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x0; unsigned int *x1; unsigned int *x2; })getTokenIDsOnText:(id)a0 withBOS:(BOOL)a1 withEOS:(BOOL)a2 withError:(id *)a3;
- (void)runOnInput:(id)a0 completion:(id /* block */)a1;

@end
