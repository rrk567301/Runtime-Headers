@class NSMutableDictionary, NSPersistentStoreMap, NSString, NSManagedObjectID;

@interface NSStoreMapNode : NSObject <NSCoding> {
    NSPersistentStoreMap *_map;
    NSManagedObjectID *_objectID;
    NSMutableDictionary *_relatedNodes;
    NSString *_entityName;
    unsigned int _version;
}

+ (void)initialize;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)key;
- (id)objectID;
- (id)entity;
- (unsigned int)_versionNumber;
- (void)_setVersionNumber:(unsigned int)a0;
- (id)_snapshot_;
- (id)configurationName;
- (id)destinationsForRelationship:(id)a0;
- (id)initWithObjectID:(id)a0;
- (const id *)knownKeyValuesPointer;

@end
