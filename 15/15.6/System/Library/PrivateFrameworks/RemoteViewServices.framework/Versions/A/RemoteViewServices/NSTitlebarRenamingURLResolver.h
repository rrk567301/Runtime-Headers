@class NSString, NSURL;

@interface NSTitlebarRenamingURLResolver : NSObject {
    NSURL *_finalURL;
    NSString *_sandboxToken;
}

@property (copy) NSString *startDisplayName;
@property (copy) NSString *userEditedDisplayName;
@property char titleWasChosenAutomatically;
@property struct _NSRange { unsigned long long x0; unsigned long long x1; } editingRange;
@property struct _NSRange { unsigned long long location; unsigned long long length; } startEditingRange;
@property struct _NSRange { unsigned long long location; unsigned long long length; } endEditingRange;
@property (copy) NSString *startExtension;
@property (copy) NSString *fallbackExtension;
@property (readonly) NSString *finalExtension;
@property long long documentUniquingNumber;
@property long long documentUniquingNumberStart;
@property long long documentUniquingNumberEnd;
@property (readonly) char documentUniquingNumberWasIncremented;
@property (copy) NSURL *originalURL;
@property (readonly) NSURL *finalURL;
@property (copy) NSURL *alternateDirectory;
@property (copy) NSString *documentUTI;
@property (readonly) NSURL *finalDirectory;
@property char extensionHidden;
@property char extensionHiddenStart;
@property char extensionHiddenEnd;
@property char isDuplicate;

+ (id)_issueSandboxExtensionForClientWithPid:(int)a0 usingFileName:(id)a1 toRequestPath:(id)a2 restrictedToOriginalPath:(id)a3 orDocumentsDir:(id)a4 doNotIssue:(char)a5;
+ (char)_path:(id)a0 pointsToSameInodeAsPath:(id)a1;
+ (id)_pathToDocumentsDirectory;
+ (char)logSomethingAboutTheUsageOfPeriodsInTheseFileNames:(id)a0 lastPathComponent:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)extensionHidden;
- (long long)documentUniquingNumber;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })editingRange;
- (void)setDefaults;
- (void)setDocumentUniquingNumber:(long long)a0;
- (void)setEditingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setExtensionHidden:(char)a0;
- (void)_setFinalURL:(id)a0;
- (void)_setSandboxToken:(id)a0;
- (char)documentUniquingNumberWasIncremented;
- (id)finalDirectory;
- (id)finalExtension;
- (id)findAvailableURLForFinalDisplayName:(id)a0 withFileSystemUniquing:(char)a1;
- (id)initWithRemoteServiceRequest:(id)a0;
- (id)localizedStringForDocumentFromUnlocalizedString:(id)a0;
- (char)resolveFinalURLInPBOXOverwriteOK:(char)a0 forClientPID:(int)a1 andEUID:(unsigned int)a2 usingFinalTitle:(id)a3;
- (void)serializeToRequest:(id)a0;
- (void)updateWithRequest:(id)a0;

@end
