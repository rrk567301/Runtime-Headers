@class ADMUser;

@interface FRManagedUser : NSObject {
    ADMUser *_user;
}

@property char restrictPurchase;
@property long long limitValue;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)saveImmediately;
- (void)_initializeFromPreferences;
- (char)_initializeWithMCX;
- (char)_initializeWithiTunesPreferences;
- (char)_initializeWithiTunesSecurePreferences;
- (id)initWithManagedUser:(id)a0;
- (void)initializeFromPreferences;

@end
