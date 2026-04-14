@class SFAuthorization;

@interface IPSystemDefaultsManager : NSObject

@property (retain, nonatomic) SFAuthorization *authorization;

+ (id)sharedDefaultsManager;
+ (BOOL)isSingleUserSystem;

- (void).cxx_destruct;
- (void)setSystemLanguages:(id)a0 locale:(id)a1 isRightToLeft:(BOOL)a2 interactionAllowed:(BOOL)a3 withCompletion:(id /* block */)a4;
- (void)updatePrebootViaAdmin;
- (void)updatePreboot;
- (void)updateNVRAM;

@end
