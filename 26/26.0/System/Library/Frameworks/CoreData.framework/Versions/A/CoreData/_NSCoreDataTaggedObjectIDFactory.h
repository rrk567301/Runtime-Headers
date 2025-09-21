@interface _NSCoreDataTaggedObjectIDFactory : NSObject {
    int _cd_rc;
    unsigned int _taggedPoolIndex;
    id _fallbackFactories;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)alloc;
- (void)_storeDeallocated;
- (id)_storeInfo1;
- (id)managedObjectIDFromURIRepresentation:(id)a0;
- (void)dealloc;
- (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
- (id)initWithPK64:(long long)a0;
- (id)managedObjectIDFromUTF8String:(const char *)a0 length:(unsigned long long)a1;
- (void)setObjectStoreIdentifier:(id)a0;
- (id)_fallbackFactory;
- (id)retain;
- (unsigned long long)retainCount;
- (void)_setStoreInfo1:(id)a0;
- (oneway void)release;
- (id)allocWithZone:(struct _NSZone { } *)a0;

@end
