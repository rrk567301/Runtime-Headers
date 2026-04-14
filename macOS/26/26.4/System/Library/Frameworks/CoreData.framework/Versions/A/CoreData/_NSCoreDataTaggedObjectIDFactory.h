@interface _NSCoreDataTaggedObjectIDFactory : NSObject {
    int _cd_rc;
    unsigned int _taggedPoolIndex;
    id _fallbackFactories;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)alloc;
- (void)_storeDeallocated;
- (void)_setStoreInfo1:(id)a0;
- (id)managedObjectIDFromUTF8String:(const char *)a0 length:(unsigned long long)a1;
- (id)allocWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (id)managedObjectIDFromURIRepresentation:(id)a0;
- (void)setObjectStoreIdentifier:(id)a0;
- (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)_fallbackFactory;
- (id)initWithPK64:(long long)a0;
- (id)_storeInfo1;

@end
