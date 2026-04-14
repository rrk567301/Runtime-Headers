@class NSDictionary, HDDaemon;

@interface HDUserDomainConceptEntityRegistry : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDictionary *_lock_typeIdentifierToEntityClass;
}

@property (readonly, weak, nonatomic) HDDaemon *daemon;

+ (id)sharedInstance;
+ (id)registryWithDaemon:(id)a0 setSharedInstance:(BOOL)a1;
+ (void)unitTesting_setSharedInstance:(id)a0;
+ (void)_setSharedInstance:(id)a0;

- (Class)userDomainConceptEntityClassForTypeIdentifier:(id)a0;
- (id)registeredDictionaryOfEntities;
- (void)_registerUserDomainConceptClassesFromProvider:(id)a0 classRegistry:(id)a1;
- (id)registeredUserDomainConceptEntityClasses;
- (void).cxx_destruct;
- (id)_builtinUserDomainConceptEntityClasses;
- (id)_registeredUserDomainConceptEntityClasses;
- (void)_lock_loadUserDomainConceptEntities;
- (id)initWithDaemon:(id)a0;

@end
