@class NSString, NSObject, SWHighlightCenter;
@protocol OS_dispatch_queue;

@interface DSHighlightCenterTracker : NSObject <SWHighlightCenterDelegate> {
    SWHighlightCenter *_highlightCenter;
    struct unordered_set<TString, std::hash<TString>, std::equal_to<TString>, std::allocator<TString>> { struct __hash_table<TString, std::hash<TString>, std::equal_to<TString>, std::allocator<TString>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<TString, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TString, void *> *> *>>> { struct { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TString, void *> *> *>> { struct { unsigned long long __size_; } ; } __deleter_; } ; } __bucket_list_; struct { struct __hash_node_base<std::__hash_node<TString, void *> *> { void *__next_; } __first_node_; } ; struct { unsigned long long __size_; } ; struct { float __max_load_factor_; } ; } __table_; } _trackedIdentifiers;
    struct unordered_set<TString, std::hash<TString>, std::equal_to<TString>, std::allocator<TString>> { struct __hash_table<TString, std::hash<TString>, std::equal_to<TString>, std::allocator<TString>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<TString, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TString, void *> *> *>>> { struct { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TString, void *> *> *>> { struct { unsigned long long __size_; } ; } __deleter_; } ; } __bucket_list_; struct { struct __hash_node_base<std::__hash_node<TString, void *> *> { void *__next_; } __first_node_; } ; struct { unsigned long long __size_; } ; struct { float __max_load_factor_; } ; } __table_; } _missedIdentifiers;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } fLock;
    NSObject<OS_dispatch_queue> *_queryQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)highlightCenterHighlightsDidChange:(id)a0;
- (id)fetchAttributionsForHighlight:(id)a0;
- (id)highlightForIdentifier:(struct __CFString { } *)a0;

@end
