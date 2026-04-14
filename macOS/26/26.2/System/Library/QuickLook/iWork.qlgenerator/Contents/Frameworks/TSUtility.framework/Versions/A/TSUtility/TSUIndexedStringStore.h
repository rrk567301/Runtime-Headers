@class , NSMutableDictionary, __end_;

@interface TSUIndexedStringStore : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct vector<NSString *, std::allocator<NSString *>> { __end_ **__begin_;  **x0; struct { id *__cap_; } x1; } _stringByIndex;
    NSMutableDictionary *_indexByString;
}

- (id)stringForIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (void).cxx_destruct;
- (unsigned long long)indexForString:(id)a0;
- (id).cxx_construct;
- (id)init;

@end
