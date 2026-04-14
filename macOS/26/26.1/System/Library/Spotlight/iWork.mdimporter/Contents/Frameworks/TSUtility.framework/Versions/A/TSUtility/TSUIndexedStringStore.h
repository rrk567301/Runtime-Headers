@class NSMutableDictionary, __cap_, __end_;

@interface TSUIndexedStringStore : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct vector<NSString *, std::allocator<NSString *>> { __end_ **__begin_; __cap_ **x0; id *x1; } _stringByIndex;
    NSMutableDictionary *_indexByString;
}

- (id).cxx_construct;
- (unsigned long long)indexForString:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)stringForIndex:(unsigned long long)a0;
- (id)init;

@end
