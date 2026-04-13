@class FRManagedUser, NSString, SFAuthorizationView, NSPopUpButton;

@interface FRParentalControlPreferencesModule : FRPreferencesModule <NSMenuDelegate> {
    SFAuthorizationView *authorizationView;
    NSPopUpButton *limitPopUpButton;
}

@property (readonly) FRManagedUser *user;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)currentParentalControlLimitValue;
+ (long long)defaultLimitValue;
+ (BOOL)validLimitValue:(long long)a0;
+ (id)limitValues;

- (void).cxx_destruct;

@end
