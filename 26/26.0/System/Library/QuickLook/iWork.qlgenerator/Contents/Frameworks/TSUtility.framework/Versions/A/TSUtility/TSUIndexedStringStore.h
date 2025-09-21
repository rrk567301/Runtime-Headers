@class NSMutableDictionary, __cap_, __end_;

@interface TSUIndexedStringStore : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct vector<NSString *, std::allocator<NSString *>> { __end_ **__begin_; __cap_ **x0; id *x1; } _stringByIndex;
    NSMutableDictionary *_indexByString;
}

- (unsigned long long)indexForString:(id)a0;
- (unsigned long long)count;
- (id)init;
- (id)stringForIndex:(unsigned long long)a0;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
