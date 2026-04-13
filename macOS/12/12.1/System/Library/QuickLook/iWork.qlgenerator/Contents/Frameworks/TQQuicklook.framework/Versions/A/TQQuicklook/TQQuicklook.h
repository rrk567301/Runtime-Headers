@class NSString, TSUTemporaryDirectory, NSBundle, TSACirrusDocument, TSABaseApplicationDelegate;
@protocol TSKRenderingExporter;

@interface TQQuicklook : NSObject <TSUResourceFileURLProvider> {
    NSString *mPath;
    TSACirrusDocument *mDocument;
    TSABaseApplicationDelegate *mBaseAppDelegate;
    TSUTemporaryDirectory *mTemporaryDirectory;
    NSString *mPassphrase;
    id<TSKRenderingExporter> mExporter;
    NSBundle *mInstalledGingerBundle;
    NSBundle *mInstalledSageBundle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadAssetColorMap;
+ (void)unloadAssetColorMap;
+ (id)tsuColorFromColorArray:(id)a0;

- (void)dealloc;
- (BOOL)load;
- (void)close;
- (unsigned long long)pageCount;
- (id)thumbnail;
- (id)fileURLForResourceInfo:(id)a0;
- (Class)appDelegateClass;
- (struct __CFString { } *)getIdentifierForApp:(id)a0;
- (id)findGingerAppBundleInArray:(id)a0 appName:(id)a1;
- (id)findSageAppBundleInArray:(id)a0 appName:(id)a1;
- (id)findAppBundleInArray:(id)a0 appName:(id)a1 minVersion:(float)a2 maxVersion:(float)a3;
- (BOOL)writePreviewToOutput:(id)a0 pageNumber:(unsigned long long)a1;
- (id)initWithPath:(id)a0 passphrase:(id)a1;
- (id)newPDFPreviewAndClose;
- (id)newPDFForPageNumber:(unsigned long long)a0;
- (id)sheetNameForPageNumber:(unsigned long long)a0 isForm:(BOOL *)a1;

@end
