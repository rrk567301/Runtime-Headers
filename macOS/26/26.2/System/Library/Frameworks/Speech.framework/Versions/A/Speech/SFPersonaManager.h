@class NSSet, NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface SFPersonaManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, copy, nonatomic) NSSet *personaIds;

+ (id)sharedInstance;
+ (id)currentPersonaId;
+ (BOOL)isCurrentPersonaDefault;
+ (void)runAsPersona:(id)a0 block:(id /* block */)a1;

- (void)removeObserver:(id)a0;
- (id)_initWithQueue:(id)a0;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (void)_detectNewPersonas:(id)a0 currentPersonaIds:(id)a1;
- (void)_detectRemovedPersonas:(id)a0 currentPersonaIds:(id)a1;
- (void)_initializeUserProfileStore;
- (void)_refreshPersonaIds;
- (BOOL)personaMatchesEnrolledUser:(id)a0;

@end
