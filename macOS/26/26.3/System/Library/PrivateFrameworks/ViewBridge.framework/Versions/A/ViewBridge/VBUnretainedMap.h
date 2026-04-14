@class , __end_;

@interface VBUnretainedMap : NSObject <NSFastEnumeration> {
    unsigned long long _mutations;
    struct vector<id<NSObject>, std::allocator<id<NSObject>>> { __end_ **__begin_;  **x0; struct { id *__cap_; } x1; } _fastEnumeration;
    struct __CFDictionary { } *_dictionary;
}

- (unsigned long long)count;
- (id)objectForKey:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)removeObjectForKey:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id).cxx_construct;

@end
