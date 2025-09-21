@class SFAuthorization;

@interface IPSystemDefaultsManager : NSObject

@property (retain, nonatomic) SFAuthorization *authorization;

+ (char)isSingleUserSystem;
+ (id)sharedDefaultsManager;

- (void).cxx_destruct;
- (void)setSystemLanguages:(id)a0 locale:(id)a1 isRightToLeft:(char)a2 interactionAllowed:(char)a3 withCompletion:(id /* block */)a4;
- (void)updateNVRAM;
- (void)updatePreboot;
- (void)updatePrebootViaAdmin;

@end
