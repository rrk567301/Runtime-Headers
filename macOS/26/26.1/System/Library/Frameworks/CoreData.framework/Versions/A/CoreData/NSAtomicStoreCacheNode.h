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

- (const id *)knownKeyValuesPointer;
- (id)valueForKey:(id)a0;
- (id)_snapshot_;
- (void)setValue:(id)a0 forKey:(id)a1;
- (unsigned int)_versionNumber;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)_setVersionNumber:(unsigned int)a0;
- (id)initWithObjectID:(id)a0;

@end
