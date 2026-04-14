@class NSObject, NSMutableDictionary, HDProfile;
@protocol OS_dispatch_queue;

@interface HDAssociationManager : NSObject {
    NSMutableDictionary *_observersByDataType;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithProfile:(id)a0;
- (void)addObserverForAllTypes:(id)a0;
- (void)removeObserver:(id)a0 forDataType:(id)a1;
- (void)removeObserverForAllTypes:(id)a0;
- (void)addObserver:(id)a0 forDataType:(id)a1;
- (void).cxx_destruct;
- (BOOL)associateObjectUUIDs:(id)a0 objectUUID:(id)a1 error:(id *)a2;
- (BOOL)associateObjects:(id)a0 withObject:(id)a1 type:(unsigned long long)a2 behavior:(unsigned long long)a3 destinationSubObject:(id)a4 error:(id *)a5;
- (BOOL)disassociateObjects:(id)a0 withObject:(id)a1 type:(unsigned long long)a2 behavior:(unsigned long long)a3 destinationSubObject:(id)a4 error:(id *)a5;
- (BOOL)insertCodableTypedObjectAssociations:(id)a0 syncStore:(id)a1 profile:(id)a2 error:(id *)a3;
- (id)objectUUIDsAssociatedWithObjectUUID:(id)a0 subObject:(id)a1 excludeDeleted:(BOOL)a2 profile:(id)a3 error:(id *)a4;

@end
