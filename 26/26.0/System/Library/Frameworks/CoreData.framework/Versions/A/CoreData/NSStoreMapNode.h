@class NSMutableDictionary, NSPersistentStoreMap, NSString, NSManagedObjectID;

@interface NSStoreMapNode : NSObject <NSCoding> {
    NSPersistentStoreMap *_map;
    NSManagedObjectID *_objectID;
    NSMutableDictionary *_relatedNodes;
    NSString *_entityName;
    unsigned int _version;
}

+ (void)initialize;

- (id)entity;
- (id)configurationName;
- (void)dealloc;
- (unsigned int)_versionNumber;
- (void)encodeWithCoder:(id)a0;
- (const id *)knownKeyValuesPointer;
- (id)_snapshot_;
- (id)objectID;
- (id)key;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)_setVersionNumber:(unsigned int)a0;
- (id)destinationsForRelationship:(id)a0;
- (id)initWithObjectID:(id)a0;

@end
