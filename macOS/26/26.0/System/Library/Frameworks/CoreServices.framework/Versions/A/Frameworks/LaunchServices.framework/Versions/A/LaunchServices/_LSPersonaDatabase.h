@class NSDictionary, NSString;

@interface _LSPersonaDatabase : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ivarLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _uncachedCalloutLock;
    NSDictionary *_cachedBundleIDToPersonasMap;
    NSString *_cachedSystemPersonaUniqueString;
    NSString *_cachedPersonalPersonaUniqueString;
    unsigned long long _userManagementGenerationNumber;
}

- (id)initPrivately;
- (id)getBundleIDToPersonasWithAttributesMap;
- (id)_getPersonaAttributesRetryingIfNecessary;
- (void)getUncachedBundleIDToPersonasWithAttributesMap:(id *)a0 systemPersonaUniqueString:(id *)a1 personalPersonaUniqueString:(id *)a2;
- (void)getCachedBundleIDToPersonasWithAttributesMap:(id *)a0 systemPersonaUniqueString:(id *)a1 personalPersonaUniqueString:(id *)a2;
- (void)refreshFromUserManagementIfNecessary;
- (void).cxx_destruct;

@end
