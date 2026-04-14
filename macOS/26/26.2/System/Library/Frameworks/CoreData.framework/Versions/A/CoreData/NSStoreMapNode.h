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
- (id)objectID;
- (id)configurationName;
- (id)initWithCoder:(id)a0;
- (const id *)knownKeyValuesPointer;
- (BOOL)isEqual:(id)a0;
- (id)_snapshot_;
- (void)encodeWithCoder:(id)a0;
- (unsigned int)_versionNumber;
- (id)key;
- (void)dealloc;
- (void)_setVersionNumber:(unsigned int)a0;
- (id)destinationsForRelationship:(id)a0;
- (id)initWithObjectID:(id)a0;

@end
