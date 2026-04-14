@interface UserUtilities : NSObject

+ (void)createPath:(id)a0 attributes:(id)a1;
+ (void)createFileWithContents:(id)a0 path:(id)a1 attributes:(id)a2;
+ (BOOL)removeFileAtPath:(id)a0;
+ (void)setMachineArray:(id)a0 forKey:(id)a1 inDomain:(id)a2;
+ (void)setMachineString:(id)a0 forKey:(id)a1 inDomain:(id)a2;
+ (void)setMachineIntValue:(long long)a0 forKey:(id)a1 inDomain:(id)a2;
+ (void)setMachinePreferencesForDomain:(id)a0;
+ (void)setMachineBOOLValue:(BOOL)a0 forKey:(id)a1 inDomain:(id)a2;
+ (void)touchEFIResourceBuilder;
+ (void)setOwner:(id)a0 group:(id)a1 forDirectory:(id)a2;
+ (void)killProcessID:(int)a0 withSignal:(int)a1;
+ (BOOL)movePath:(id)a0 toPath:(id)a1;
+ (void)setFMMGoodSamaritanMessage:(id)a0;
+ (void)setXServeLockEnclosureState:(BOOL)a0;
+ (int)launchFibreConfig:(id)a0;
+ (void)setOwner:(id)a0 forDirectory:(id)a1;
+ (BOOL)asyncRemoveFileAtPath:(id)a0 delegate:(id)a1;
+ (void)asyncSecurelyRemoveFileAtPath:(id)a0 withOptions:(unsigned long long)a1 delegate:(id)a2;
+ (void)setCopyPermissionsForNodeAtPath:(id)a0 delegate:(id)a1;
+ (void)setMachineData:(id)a0 forKey:(id)a1 inDomain:(id)a2;
+ (void)setMachineDictionary:(id)a0 forKey:(id)a1 inDomain:(id)a2;
+ (unsigned long long)directorySizeAtPath:(id)a0;
+ (void)kickKextcache;
+ (BOOL)hasOtherConsolerUsers;
+ (void)setLockSecurePrefs:(BOOL)a0 authString:(id)a1;
+ (void)setLockSecurePrefs:(BOOL)a0 authArray:(id)a1;
+ (void)kickMCXCacher;
+ (id)availableUserTemplateLocalizations;
+ (void)CRSetIsAutoSubmitEnabled:(BOOL)a0;
+ (void)CRSetIsThirdPartyApplicationDataSubmissionEnabled:(BOOL)a0;

@end
