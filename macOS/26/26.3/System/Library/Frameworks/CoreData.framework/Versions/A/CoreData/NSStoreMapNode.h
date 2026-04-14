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
- (id)_snapshot_;
- (const id *)knownKeyValuesPointer;
- (id)key;
- (id)objectID;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (unsigned int)_versionNumber;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_setVersionNumber:(unsigned int)a0;
- (id)destinationsForRelationship:(id)a0;
- (id)initWithObjectID:(id)a0;

@end
