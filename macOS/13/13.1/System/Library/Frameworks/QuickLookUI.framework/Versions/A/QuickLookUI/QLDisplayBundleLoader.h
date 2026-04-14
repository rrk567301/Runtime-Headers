@class NSMutableDictionary;

@interface QLDisplayBundleLoader : NSObject {
    NSMutableDictionary *_displayBundlesById;
}

+ (id)sharedLoader;
+ (BOOL)useBlankDisplayBundleForPerformanceTesting;

- (id)init;
- (void).cxx_destruct;
- (id)newPreviewDocumentDisplayBundleForPreview:(id)a0;
- (void)_lookForDisplayBundles;
- (void)registerDisplayBundle:(id)a0 withBundleIdentifier:(id)a1;
- (Class)loadDisplayBundle:(id)a0;
- (Class)displayBundleClassForDisplayBundleID:(id)a0;
- (id)displayBundleForPreview:(id)a0 owner:(id)a1;
- (id)displayBundleForPreview:(id)a0 owner:(id)a1 forcedDisplayBundleID:(id)a2;

@end
