@class NSMutableDictionary, NSManagedObjectID;

@interface NSAtomicStoreCacheNode : NSObject {
    NSManagedObjectID *_objectID;
    unsigned long long __versionNumber;
    NSMutableDictionary *_propertyCache;
    void *_reserved1;
}

@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (retain, nonatomic) NSMutableDictionary *propertyCache;

+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;

- (void)dealloc;
- (unsigned int)_versionNumber;
- (id)valueForKey:(id)a0;
- (id)init;
- (const id *)knownKeyValuesPointer;
- (id)_snapshot_;
- (void)setValue:(id)a0 forKey:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)_setVersionNumber:(unsigned int)a0;
- (id)initWithObjectID:(id)a0;

@end
