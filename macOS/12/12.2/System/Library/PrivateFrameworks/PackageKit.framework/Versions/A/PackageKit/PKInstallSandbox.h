@class NSDate, NSString, NSSet, PKInstallRequest, NSMutableDictionary, NSDictionary, NSMutableArray, NSNumber;

@interface PKInstallSandbox : NSObject <NSSecureCoding> {
    NSString *_sandboxPath;
    NSString *_scriptsPath;
    NSString *_temporaryPath;
    NSMutableDictionary *_scriptDirsByPackageSpecifier;
    NSMutableDictionary *_bomPathsByPackageSpecifier;
    NSMutableArray *_cleanupPaths;
    NSDictionary *_scriptsAttributes;
    NSDictionary *_temporaryAttributes;
    BOOL _safeToReset;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) PKInstallRequest *installRequest;
@property (copy) NSString *sandboxPath;
@property (readonly) NSString *payloadDirectory;
@property (retain) NSNumber *stagedSize;
@property (retain) NSDate *stageDate;
@property long long relevance;
@property (retain) NSSet *previousPackageIdentifiersSharingGroupsWithSandbox;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)wasStaged;
- (BOOL)resetToEmptyReturningError:(id *)a0;
- (id)secureTemporaryDirectoryPath;
- (id)_createDirectory:(id)a0 uniquifying:(BOOL)a1 error:(id *)a2;
- (id)sandboxContainedTrashcanPath;
- (id)initWithSandboxPath:(id)a0 installRequest:(id)a1 error:(id *)a2;
- (id)bomPathForPackageSpecifier:(id)a0;
- (BOOL)prepareForCommitReturningError:(id *)a0;
- (id)scriptsDirectoryForPackageSpecifier:(id)a0;
- (id)temporaryDirectoryForScripts;
- (id)createSecureTemporaryDirectoryForScript;
- (id)trashcanPath;
- (id)extraCleanupPaths;

@end
