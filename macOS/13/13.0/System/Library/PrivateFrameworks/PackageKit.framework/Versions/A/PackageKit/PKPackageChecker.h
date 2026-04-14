@class NSArray, NSString, NSDictionary, NSMutableArray, PKPackageInfo;

@interface PKPackageChecker : NSObject {
    NSString *_contentPath;
    PKPackageInfo *_packageInfo;
    NSDictionary *_componentMap;
    NSMutableArray *_checkResults;
}

@property (copy) NSArray *checkedFileAttributes;

+ (id)_defaultCheckedFileAttributes;
+ (id)stringForCheckErrorCode:(int)a0;

- (void)dealloc;
- (id)initWithUnarchivedPackage:(id)a0 error:(id *)a1;
- (id)checkResults;
- (void)_checkPayloadAgainstBom;
- (void)_checkPayloadAgainstPackageInfo:(id)a0;
- (void)_checkScriptsAgainstPackageInfo:(id)a0;
- (BOOL)_shouldValidatePayload;
- (void)_searchForComponentsInDirectory:(id)a0 addTo:(id)a1;
- (void)_checkBundle:(id)a0 againstVersion:(id)a1 usingDisplayPath:(id)a2;
- (id)_displayStringForBundleVersion:(id)a0;
- (BOOL)_isValidScriptAtPath:(id)a0 error:(id *)a1;

@end
