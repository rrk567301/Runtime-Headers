@interface NSPersistentCacheRow : NSObject {
    int _cd_rc;
    int _externalReferenceCount;
    struct _externalRefFlags_st { unsigned char _hasTemporaryID : 1; unsigned char _backgroundDealloc : 1; unsigned short _virtualfk_count : 14; unsigned short _ordkey_count : 14; unsigned char _reserved : 2; } _externalRefFlags;
    _Atomic BOOL _invalidToOnes;
    id *_toManyMap;
    double _birth;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (BOOL)_tryRetain;
- (id)retain;
- (unsigned long long)retainCount;
- (unsigned long long)version;
- (id)objectID;
- (id)initWithOptions:(unsigned int)a0 andTimestamp:(double)a1;
- (const id *)knownKeyValuesPointer;

@end
