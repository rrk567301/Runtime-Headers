@class NSMutableDictionary;

@interface QLDisplayBundleLoader : NSObject {
    NSMutableDictionary *_displayBundlesById;
}

+ (id)sharedLoader;
+ (BOOL)useBlankDisplayBundleForPerformanceTesting;

- (void)dealloc;
- (id)init;
- (id)newPreviewDocumentDisplayBundleForPreview:(id)a0;
- (void)registerDisplayBundle:(id)a0 withBundleIdentifier:(id)a1;
- (void)_lookForDisplayBundles;
- (Class)loadDisplayBundle:(id)a0;
- (id)displayBundleForPreview:(id)a0 owner:(id)a1 forcedDisplayBundleID:(id)a2;
- (Class)displayBundleClassForDisplayBundleID:(id)a0;
- (id)displayBundleForPreview:(id)a0 owner:(id)a1;

@end
