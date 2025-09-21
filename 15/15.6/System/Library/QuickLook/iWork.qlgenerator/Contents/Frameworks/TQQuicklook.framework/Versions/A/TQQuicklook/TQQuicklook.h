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
+ (id)tsuColorFromColorArray:(id)a0;
+ (void)unloadAssetColorMap;

- (void)dealloc;
- (char)load;
- (void)close;
- (unsigned long long)pageCount;
- (id)thumbnail;
- (Class)appDelegateClass;
- (id)fileURLForResourceInfo:(id)a0;
- (id)findAppBundleInArray:(id)a0 appName:(id)a1 minVersion:(float)a2 maxVersion:(float)a3;
- (id)findGingerAppBundleInArray:(id)a0 appName:(id)a1;
- (id)findSageAppBundleInArray:(id)a0 appName:(id)a1;
- (struct __CFString { } *)getIdentifierForApp:(id)a0;
- (id)initWithPath:(id)a0 passphrase:(id)a1;
- (id)newPDFForPageNumber:(unsigned long long)a0;
- (id)newPDFPreviewAndClose;
- (id)sheetNameForPageNumber:(unsigned long long)a0 isForm:(char *)a1;
- (char)writePreviewToOutput:(id)a0 pageNumber:(unsigned long long)a1;

@end
