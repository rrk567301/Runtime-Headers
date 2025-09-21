@class NSManagedObjectModel, NSMutableDictionary, NSRecursiveLock;

@interface PFUbiquityMetadataFactory : NSObject {
    NSMutableDictionary *_rootLocationToPeerIDToEntry;
    NSRecursiveLock *_rootLocationToPeerIDToEntryLock;
    NSManagedObjectModel *_cachedModel;
}

+ (void)initialize;
+ (void)_invalidateStaticCaches;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)addModelingToolUserInfoToEntity:(id)a0;
- (void)addModelingToolUserInfoToProperty:(id)a0;
- (id)createMetadataModel;
- (id)newAttributeNamed:(id)a0 attributeType:(unsigned long long)a1 isOptional:(char)a2 isTransient:(char)a3 withDefaultValue:(id)a4 andMinValue:(id)a5 andMaxValue:(id)a6;
- (id)newEntityForName:(id)a0;
- (id)newRelationshipNamed:(id)a0 withDestinationEntity:(id)a1 andInverseRelationship:(id)a2 isOptional:(char)a3 isToMany:(char)a4 andDeleteRule:(unsigned long long)a5;

@end
