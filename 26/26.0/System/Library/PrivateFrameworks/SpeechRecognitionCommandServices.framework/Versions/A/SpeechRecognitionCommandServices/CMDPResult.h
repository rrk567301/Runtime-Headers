@interface CMDPResult : NSObject {
    struct unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>>, std::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>> { void *__ptr_; } _resultFst;
    struct unique_ptr<CMDPNormalizer, std::default_delete<CMDPNormalizer>> { struct CMDPNormalizer *__ptr_; } _normalizer;
    struct vector<std::unique_ptr<CMDPToken>, std::allocator<std::unique_ptr<CMDPToken>>> { void *__begin_; void *__end_; void *__cap_; } _resultNodes;
    struct set<std::string, std::less<std::string>, std::allocator<std::string>> { struct __tree<std::string, std::less<std::string>, std::allocator<std::string>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _symbol_set;
}

+ (struct vector<std::vector<std::vector<std::unique_ptr<CMDPToken>>>, std::allocator<std::vector<std::vector<std::unique_ptr<CMDPToken>>>>> { void *x0; void *x1; void *x2; })CMDPTokenSausageFromCFTokenSausage:(struct __CFArray { } *)a0;
+ (struct vector<std::vector<std::vector<std::unique_ptr<CMDPToken>>>, std::allocator<std::vector<std::vector<std::unique_ptr<CMDPToken>>>>> { void *x0; void *x1; void *x2; })CMDPTokenSausageFromAFSpeechPhraseArray:(id)a0;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createArrayFromNBestResults:(const void *)a0 withGrammarData:(id)a1;
- (id)initWithAFSpeechPhraseArray:(id)a0 forLocaleIdentifier:(id)a1;
- (id)initWithTokenSausage:(struct __CFArray { } *)a0 forLocaleIdentifier:(id)a1;
- (id)initWithTokenSausageVec:(void *)a0 forLocaleIdentifier:(id)a1;
- (id)matchWithGrammars:(id)a0 winningIndex:(int *)a1 winningDistance:(float *)a2;

@end
