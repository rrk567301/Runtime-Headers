@class ADMUser;

@interface FRManagedUser : NSObject {
    ADMUser *_user;
}

@property BOOL restrictPurchase;
@property long long limitValue;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)saveImmediately;
- (void)dealloc;
- (void)_initializeFromPreferences;
- (BOOL)_initializeWithMCX;
- (BOOL)_initializeWithiTunesPreferences;
- (BOOL)_initializeWithiTunesSecurePreferences;
- (id)initWithManagedUser:(id)a0;
- (void)initializeFromPreferences;

@end
