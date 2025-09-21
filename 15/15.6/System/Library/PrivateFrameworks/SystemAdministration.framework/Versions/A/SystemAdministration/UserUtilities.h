@interface UserUtilities : NSObject

+ (void)CRSetIsThirdPartyApplicationDataSubmissionEnabled:(char)a0;
+ (void)setMachinePreferencesForDomain:(id)a0;
+ (void)CRSetIsAutoSubmitEnabled:(char)a0;
+ (char)asyncRemoveFileAtPath:(id)a0 delegate:(id)a1;
+ (void)setMachineData:(id)a0 forKey:(id)a1 inDomain:(id)a2;
+ (void)asyncSecurelyRemoveFileAtPath:(id)a0 withOptions:(unsigned long long)a1 delegate:(id)a2;
+ (id)availableUserTemplateLocalizations;
+ (void)createFileWithContents:(id)a0 path:(id)a1 attributes:(id)a2;
+ (void)createPath:(id)a0 attributes:(id)a1;
+ (unsigned long long)directorySizeAtPath:(id)a0;
+ (char)hasOtherConsolerUsers;
+ (void)kickKextcache;
+ (void)kickMCXCacher;
+ (void)killProcessID:(int)a0 withSignal:(int)a1;
+ (int)launchFibreConfig:(id)a0;
+ (char)movePath:(id)a0 toPath:(id)a1;
+ (char)removeFileAtPath:(id)a0;
+ (void)setCopyPermissionsForNodeAtPath:(id)a0 delegate:(id)a1;
+ (void)setFMMGoodSamaritanMessage:(id)a0;
+ (void)setLockSecurePrefs:(char)a0 authArray:(id)a1;
+ (void)setLockSecurePrefs:(char)a0 authString:(id)a1;
+ (void)setMachineArray:(id)a0 forKey:(id)a1 inDomain:(id)a2;
+ (void)setMachineArray:(id)a0 forKey:(id)a1 inDomain:(id)a2 forHost:(id)a3;
+ (void)setMachineBOOLValue:(char)a0 forKey:(id)a1 inDomain:(id)a2;
+ (void)setMachineBOOLValue:(char)a0 forKey:(id)a1 inDomain:(id)a2 forHost:(id)a3;
+ (void)setMachineData:(id)a0 forKey:(id)a1 inDomain:(id)a2 forHost:(id)a3;
+ (void)setMachineDictionary:(id)a0 forKey:(id)a1 inDomain:(id)a2;
+ (void)setMachineDictionary:(id)a0 forKey:(id)a1 inDomain:(id)a2 forHost:(id)a3;
+ (void)setMachineIntValue:(long long)a0 forKey:(id)a1 inDomain:(id)a2;
+ (void)setMachineIntValue:(long long)a0 forKey:(id)a1 inDomain:(id)a2 forHost:(id)a3;
+ (void)setMachineString:(id)a0 forKey:(id)a1 inDomain:(id)a2;
+ (void)setMachineString:(id)a0 forKey:(id)a1 inDomain:(id)a2 forHost:(id)a3;
+ (void)setOwner:(id)a0 forDirectory:(id)a1;
+ (void)setOwner:(id)a0 group:(id)a1 forDirectory:(id)a2;
+ (void)setXServeLockEnclosureState:(char)a0;
+ (void)touchEFIResourceBuilder;
+ (void)use12HourClockForLoginWindow:(char)a0;

@end
