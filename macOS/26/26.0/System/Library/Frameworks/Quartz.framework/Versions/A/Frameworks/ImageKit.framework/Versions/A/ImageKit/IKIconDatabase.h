@interface IKIconDatabase : NSObject {
    struct __CFDictionary { } *_iconToIndex;
    struct __CFDictionary { } *_indexToIcon;
}

- (void)finalize;
- (void)cleanup;
- (void)dealloc;
- (id)init;
- (void)associateIconRef:(struct OpaqueIconRef { } *)a0 withIndex:(unsigned long long)a1;
- (struct OpaqueIconRef { } *)iconRefForIndex:(unsigned long long)a0;
- (unsigned long long)indexForIconRef:(struct OpaqueIconRef { } *)a0;
- (BOOL)indexHasIconAssociated:(unsigned long long)a0;
- (void)removeIconCacheFromDatabaseIndex:(unsigned long long)a0;

@end
