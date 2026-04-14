@class NSBundle;

@interface PKJaguarPackage : PKPackage {
    NSBundle *_bundle;
}

+ (BOOL)canInitWithURL:(id)a0;
+ (id)_payloadForPackagePath:(id)a0;
+ (BOOL)_isArchiveSupported:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithURL:(id)a0;
- (id)initWithURL:(id)a0 options:(id)a1;
- (id)payloadExtractorWithDestination:(id)a0 externalRoot:(id)a1 error:(id *)a2;
- (id)_scriptsDirectory;
- (id)_parseHintsFile:(id)a0;
- (id)_resourceRelativePathForScript:(id)a0;
- (id)_preflightScriptPath;
- (id)_postflightScriptPath;
- (id)_preupgradeScriptPath;
- (id)_postupgradeScriptPath;
- (id)BOMData;
- (id)_staticObsoleteFiles;
- (id)_staticObsoleteDirectories;
- (id)_staticObsoleteFilesOrRecursiveDirectories;
- (BOOL)_payloadLargeAndSegmented;

@end
