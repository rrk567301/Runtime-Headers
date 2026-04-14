@class NSString, NSURL, KVProvisionalResourceManager;

@interface KVSkitReader : NSObject <KVSkitReadAccess> {
    NSURL *_directoryURL;
    KVProvisionalResourceManager *_resourceManager;
    struct unique_ptr<skitbridge::Searcher, std::default_delete<skitbridge::Searcher>> { struct __compressed_pair<skitbridge::Searcher *, std::default_delete<skitbridge::Searcher>> { struct Searcher *__value_; } __ptr_; } _searcher;
    struct path { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } __pn_; } _nameTriePath;
    struct path { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } __pn_; } _aliasTriePath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)prewarm;
- (BOOL)deactivate;
- (id)initWithSkitDirectoryURL:(id)a0;
- (id)indexLocale;
- (id /* block */)_activationBlock;
- (id /* block */)_deactivationBlock;
- (id)matchSpans:(id)a0 error:(id *)a1;
- (id)initWithSkitDirectoryURL:(id)a0 lifespan:(double)a1;

@end
