@class __cap_, __end_;

@interface VBUnretainedMap : NSObject <NSFastEnumeration> {
    unsigned long long _mutations;
    struct vector<id<NSObject>, std::allocator<id<NSObject>>> { __end_ **__begin_; __cap_ **x0; id *x1; } _fastEnumeration;
    struct __CFDictionary { } *_dictionary;
}

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)dealloc;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (void)removeObjectForKey:(id)a0;
- (id)description;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
