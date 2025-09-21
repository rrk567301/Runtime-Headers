@class NSString, NSDateFormatter, CLSDataStore, NSDate, NSMutableDictionary;

@interface CLSObject : NSObject <CLSRelationable, CLSGraphVertex, NSLocking, NSSecureCoding> {
    char _deleted;
    char _modified;
    char _enforceImmutability;
    CLSDataStore *_dataStore;
    NSString *_parentObjectID;
    NSString *_appIdentifier;
    CLSObject *_parent;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    char _needsRepair;
}

@property (class, readonly, nonatomic) NSDateFormatter *dateFormatter;
@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isTemporary) char temporary;
@property unsigned int generation;
@property (copy, nonatomic) NSString *appIdentifier;
@property (copy, nonatomic) NSString *objectID;
@property (copy, nonatomic) NSString *parentObjectID;
@property (weak, nonatomic) CLSObject *parent;
@property (weak, nonatomic) CLSDataStore *dataStore;
@property (nonatomic, getter=isDeleted) char deleted;
@property (nonatomic, getter=isModified) char modified;
@property (retain, nonatomic) NSDate *dateCreated;
@property (retain, nonatomic) NSDate *dateLastModified;
@property (retain, nonatomic) NSDate *dateExpires;
@property (nonatomic, getter=isImmutabilityEnforced) char enforceImmutability;
@property (copy, nonatomic) NSMutableDictionary *childrenByID;
@property (readonly, nonatomic) id vertexID;

+ (id)relations;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)lock;
- (void)unlock;
- (id)_init;
- (void)addChild:(id)a0;
- (id)dictionaryRepresentation;
- (id)identity;
- (void)removeChild:(id)a0;
- (id)childrenOfClass:(Class)a0;
- (void)setNeedsRepair:(char)a0;
- (char)needsRepair;
- (void)_addChild:(id)a0;
- (void)_addChild:(id)a0 lock:(char)a1;
- (void)removeFromParentWithoutDeleting;
- (char)validateObject:(id *)a0;
- (void)addChild:(id)a0 changedPropertyName:(id)a1;
- (id)childrenPassingTest:(id /* block */)a0;
- (void)didSaveObject;
- (long long)effectiveAuthorizationStatus;
- (void)enumerateChildren:(id /* block */)a0;
- (id)initWithDeletedObjectID:(id)a0;
- (void)mergeWithObject:(id)a0;
- (void)removeChild:(id)a0 changedPropertyName:(id)a1;
- (id)removeChildWithoutDeleting:(id)a0;

@end
