@interface NSPersistentCacheRow : NSObject {
    int _cd_rc;
    int _externalReferenceCount;
    struct _externalRefFlags_st { unsigned char _invalidToOnes : 1; unsigned char _hasTemporaryID : 1; unsigned char _backgroundDealloc : 1; unsigned char _reservedFlags : 1; unsigned short _virtualfk_count : 14; unsigned short _ordkey_count : 14; } _externalRefFlags;
    id *_toManyMap;
    double _birth;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (unsigned long long)version;
- (id)objectID;
- (const id *)knownKeyValuesPointer;
- (id)initWithOptions:(unsigned int)a0 andTimestamp:(double)a1;

@end
