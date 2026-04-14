@class __cap_, __end_;

@interface VBUnretainedMap : NSObject <NSFastEnumeration> {
    unsigned long long _mutations;
    struct vector<id<NSObject>, std::allocator<id<NSObject>>> { __end_ **__begin_; __cap_ **x0; id *x1; } _fastEnumeration;
    struct __CFDictionary { } *_dictionary;
}

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id).cxx_construct;
- (id)objectForKey:(id)a0;
- (id)description;
- (void)dealloc;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
