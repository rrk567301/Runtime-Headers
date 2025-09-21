@class TESTriggerPhraseLoader, NSLocale;

@interface TESTriggerPhraseCollection : NSObject {
    struct unique_ptr<trie::MarisaTrie<unsigned short, char16_t>, std::default_delete<trie::MarisaTrie<unsigned short, char16_t>>> { struct __compressed_pair<trie::MarisaTrie<unsigned short, char16_t> *, std::default_delete<trie::MarisaTrie<unsigned short, char16_t>>> { void *__value_; } __ptr_; } _trie;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } _trieBlob;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _mutex;
}

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) TESTriggerPhraseLoader *triggerPhraseLoader;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_dispatchQueue;
- (id)initWithLocale:(id)a0;
- (void)_buildAndLoadTrie;
- (void)_loadTrie;
- (char)_shouldRecompileTrie:(id)a0;
- (id)_trieBlobURL;
- (void)enumerateMatchStringsInString:(id)a0 searchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 usingBlock:(id /* block */)a2;
- (void)waitForSync;

@end
