@interface RBPersonaManager : NSObject <RBPersonaManaging> {
    char _personasSupported;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)init;
- (char)isConcretePersona:(id)a0;
- (char)personaForIdentity:(id)a0 context:(id)a1 personaUID:(out unsigned int *)a2 personaUniqueString:(out id *)a3;
- (char)personaRequiredForExtensionContext:(id)a0 serviceDict:(id)a1;
- (id)personalPersonaUniqueString;
- (char)personasAreSupported;

@end
