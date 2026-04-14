@class NSMutableDictionary, UMUserPersonaAttributes;

@interface RBPersonaManager : NSObject <RBPersonaManaging> {
    BOOL _hasUserManagement;
    BOOL _personasSupported;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    UMUserPersonaAttributes *_personalAttributes;
    NSMutableDictionary *_personaAttributesCache;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)personasAreSupported;
- (BOOL)personaForIdentity:(id)a0 context:(id)a1 personaUID:(out unsigned int *)a2 personaUniqueString:(out id *)a3;
- (id)personalPersonaUniqueString;
- (BOOL)isConcretePersona:(id)a0;

@end
