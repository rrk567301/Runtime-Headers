@class TESTriggerPhraseLoader, NSLocale;

@interface TESTriggerPhraseCollection : NSObject {
    struct unique_ptr<trie::MarisaTrie<unsigned short, char16_t>, std::default_delete<trie::MarisaTrie<unsigned short, char16_t>>> { void *__ptr_; } _trie;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } _trieBlob;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _mutex;
}

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) TESTriggerPhraseLoader *triggerPhraseLoader;

- (id)initWithLocale:(id)a0;
- (void)dealloc;
- (id).cxx_construct;
- (id)_dispatchQueue;
- (void).cxx_destruct;
- (void)_buildAndLoadTrie;
- (void)_loadTrie;
- (BOOL)_shouldRecompileTrie:(id)a0;
- (id)_trieBlobURL;
- (void)enumerateMatchStringsInString:(id)a0 searchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 usingBlock:(id /* block */)a2;
- (void)waitForSync;

@end
