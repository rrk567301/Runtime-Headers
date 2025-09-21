@interface AppletTranslationLibrary.ExpressMode : NSObject {
    void /* unknown type, empty encoding */ modulesRequiringSlowPath;
    void /* unknown type, empty encoding */ reservedTCIs;
    void /* unknown type, empty encoding */ internalBuild;
    void /* unknown type, empty encoding */ userDefaults;
}

+ (char)applyAssertionConfiguration:(id)a0 toSecureElement:(id)a1 inSessionWithPassUniqueIDs:(id)a2 hasActivatedApplets:(BOOL *)a3 performActivations:(char)a4 useLegacyBehavior:(char)a5 error:(id *)a6;
+ (char)applyConfiguration:(id)a0 toSecureElement:(id)a1 inSessionWithAID:(id)a2 hasActivatedApplets:(BOOL *)a3 performActivations:(char)a4 useLegacyBehavior:(char)a5 error:(id *)a6;
+ (id)checkCompatibilityWithPassInformation:(id)a0 error:(id *)a1;
+ (id)checkCompatibilityWithPassInformation:(id)a0 useLegacyBehavior:(char)a1 error:(id *)a2;
+ (char)getFastPathWithPassInformation:(id)a0 fastPathOut:(BOOL *)a1 useLegacyBehavior:(char)a2 error:(id *)a3;

- (id)init;
- (void).cxx_destruct;

@end
