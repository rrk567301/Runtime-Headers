@interface SRFUtilities : NSObject

@property (class, readonly, nonatomic) char isFastUserSwitching;
@property (class, readonly, nonatomic) char isShieldWindowShowing;

+ (char)hasEntitlement:(id)a0;
+ (char)_taskHasAbsolutePathReadOnly:(struct __SecTask { } *)a0 forPath:(id)a1;
+ (char)_taskHasAbsolutePathReadWrite:(struct __SecTask { } *)a0 forPath:(id)a1;
+ (char)_taskHasAppSandbox:(struct __SecTask { } *)a0;
+ (char)_taskHasHomeRelativePathReadOnly:(struct __SecTask { } *)a0 forPath:(id)a1;
+ (char)_taskHasHomeRelativePathReadWrite:(struct __SecTask { } *)a0 forPath:(id)a1;
+ (char)_taskHasMachLookup:(struct __SecTask { } *)a0 forGlobalName:(id)a1;
+ (char)_taskHasSharedPreferenceReadOnly:(struct __SecTask { } *)a0 forDomain:(id)a1;
+ (char)_taskHasSharedPreferenceReadWrite:(struct __SecTask { } *)a0 forDomain:(id)a1;
+ (char)canLookupMachService:(id)a0;
+ (char)canReadAbsolutePath:(id)a0;
+ (char)canReadHomeRelativePath:(id)a0;
+ (char)canReadPreferenceDomain:(id)a0;
+ (char)canWriteAbsolutePath:(id)a0;
+ (char)canWriteHomeRelativePath:(id)a0;
+ (char)canWritePreferenceDomain:(id)a0;
+ (char)microphoneKeyAvailable;

@end
