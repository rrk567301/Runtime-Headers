@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface WebAppGenerator : NSObject {
    NSURL *_destinationFolderURL;
    NSObject<OS_dispatch_queue> *_internalQueue;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct { struct SuddenTerminationDisabler *__ptr_; } ; } _appGenerationSuddenTerminationDisabler;
}

+ (id)updateAndReturnIconForManifest:(id)a0 inBundle:(id)a1;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;
- (void)_didFailToGenerateWebAppAtURL:(id)a0 reason:(id)a1 completionHandler:(id /* block */)a2;
- (void)_generateIconForManifest:(id)a0 inBundle:(id)a1 addToDock:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)_populateAppName:(id *)a0 fromManifest:(id)a1;
- (id)_populateDestinationFolderURL;
- (id)_prepareDestinationBundle:(id *)a0 forAppName:(id)a1 removingExistingBundle:(BOOL)a2;
- (void)_removeWebAppAtURL:(id)a0;
- (void)_setDefaultWindowSizeFromBrowserDocument:(id)a0 forBundleURL:(id)a1;
- (BOOL)_setUpInfoDictionaryForAppNamed:(id)a0 withManifest:(id)a1 bundle:(id)a2 error:(id *)a3;
- (id)_setUpWebAppWithOutputAttributes:(struct WebAppAttributes { id x0; id x1; id x2; id x3; id x4; } *)a0 manifest:(id)a1;
- (id)_webAppDictionaryForAppNamed:(id)a0 withManifest:(id)a1;
- (void)generateWebAppWithManifest:(id)a0 forBrowserDocument:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithDestinationFolderURL:(id)a0;

@end
