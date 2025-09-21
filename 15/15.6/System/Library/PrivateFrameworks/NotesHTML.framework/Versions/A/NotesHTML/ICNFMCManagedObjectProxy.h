@class NSManagedObjectID, NSString, NSManagedObject, NSManagedObjectContext;

@interface ICNFMCManagedObjectProxy : NSObject <ICNFMCChanging> {
    NSManagedObjectContext *_context;
    NSManagedObject *_managedObject;
}

@property (readonly) NSManagedObjectID *objectID;
@property char isChanging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithManagedObject:(id)a0;
- (void)beginChanging;
- (char)endChanging:(char)a0 immediately:(char)a1;
- (void)_handleObjectDeletion:(id)a0;
- (id)proxiedValueForKey:(id)a0;
- (void)setProxiedValue:(id)a0 forKey:(id)a1;

@end
