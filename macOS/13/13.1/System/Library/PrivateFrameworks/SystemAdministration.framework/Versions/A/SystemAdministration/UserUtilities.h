@interface UserUtilities : NSObject

+ (void)setOwner:(id)a0 forDirectory:(id)a1;
+ (void)setOwner:(id)a0 group:(id)a1 forDirectory:(id)a2;
+ (void)killProcessID:(int)a0 withSignal:(int)a1;
+ (void)createFileWithContents:(id)a0 path:(id)a1 attributes:(id)a2;
+ (void)createPath:(id)a0 attributes:(id)a1;
+ (BOOL)removeFileAtPath:(id)a0;
+ (BOOL)asyncRemoveFileAtPath:(id)a0 delegate:(id)a1;
+ (void)asyncSecurelyRemoveFileAtPath:(id)a0 withOptions:(unsigned long long)a1 delegate:(id)a2;
+ (BOOL)movePath:(id)a0 toPath:(id)a1;
+ (void)setCopyPermissionsForNodeAtPath:(id)a0 delegate:(id)a1;
+ (void)setMachineString:(id)a0 forKey:(id)a1 inDomain:(id)a2;
+ (void)setMachineIntValue:(long long)a0 forKey:(id)a1 inDomain:(id)a2;
+ (void)setMachineBOOLValue:(BOOL)a0 forKey:(id)a1 inDomain:(id)a2;
+ (void)setMachineData:(id)a0 forKey:(id)a1 inDomain:(id)a2;
+ (void)setMachineDictionary:(id)a0 forKey:(id)a1 inDomain:(id)a2;
+ (void)setMachineArray:(id)a0 forKey:(id)a1 inDomain:(id)a2;
+ (void)setMachinePreferencesForDomain:(id)a0;
+ (void)setFMMGoodSamaritanMessage:(id)a0;
+ (unsigned long long)directorySizeAtPath:(id)a0;
+ (void)touchEFIResourceBuilder;
+ (void)kickKextcache;
+ (BOOL)hasOtherConsolerUsers;
+ (void)setXServeLockEnclosureState:(BOOL)a0;
+ (void)setLockSecurePrefs:(BOOL)a0 authString:(id)a1;
+ (void)setLockSecurePrefs:(BOOL)a0 authArray:(id)a1;
+ (void)kickMCXCacher;
+ (int)launchFibreConfig:(id)a0;
+ (id)availableUserTemplateLocalizations;
+ (void)CRSetIsAutoSubmitEnabled:(BOOL)a0;
+ (void)CRSetIsThirdPartyApplicationDataSubmissionEnabled:(BOOL)a0;

@end
