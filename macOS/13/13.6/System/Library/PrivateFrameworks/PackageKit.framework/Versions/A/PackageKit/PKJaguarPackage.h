@class NSBundle;

@interface PKJaguarPackage : PKPackage {
    NSBundle *_bundle;
}

+ (BOOL)canInitWithURL:(id)a0;
+ (BOOL)_isArchiveSupported:(id)a0;
+ (id)_payloadForPackagePath:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURL:(id)a0;
- (id)initWithURL:(id)a0 options:(id)a1;
- (id)payloadExtractorWithDestination:(id)a0 externalRoot:(id)a1 error:(id *)a2;
- (id)BOMData;
- (id)_resourceRelativePathForScript:(id)a0;
- (id)_parseHintsFile:(id)a0;
- (BOOL)_payloadLargeAndSegmented;
- (id)_postflightScriptPath;
- (id)_postupgradeScriptPath;
- (id)_preflightScriptPath;
- (id)_preupgradeScriptPath;
- (id)_scriptsDirectory;
- (id)_staticObsoleteDirectories;
- (id)_staticObsoleteFiles;
- (id)_staticObsoleteFilesOrRecursiveDirectories;

@end
