@interface _NSCoreDataTaggedObjectIDFactory : NSObject {
    int _cd_rc;
    unsigned int _taggedPoolIndex;
    id _fallbackFactories;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)allocWithZone:(struct _NSZone { } *)a0;
- (id)alloc;
- (void)_storeDeallocated;
- (void)setObjectStoreIdentifier:(id)a0;
- (id)initWithPK64:(long long)a0;
- (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
- (id)managedObjectIDFromUTF8String:(const char *)a0 length:(unsigned long long)a1;
- (id)managedObjectIDFromURIRepresentation:(id)a0;
- (void)_setStoreInfo1:(id)a0;
- (id)_storeInfo1;
- (id)_fallbackFactory;

@end
