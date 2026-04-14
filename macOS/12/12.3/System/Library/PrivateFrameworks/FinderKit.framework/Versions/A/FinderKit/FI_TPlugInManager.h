@interface FI_TPlugInManager : NSObject

+ (id)badgeImageForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 size:(double)a1;
+ (id)sidebarIconForFolder:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 asyncCallback:(const void *)a1;
+ (id)hostForExtensionUUID:(const void *)a0;
+ (void)scheduleWritingExtensionDirectoryMap;
+ (void)removeFromPendingExtensionUUIDs:(const void *)a0;
+ (id)hostForExtension:(id)a0;
+ (void)openContainer:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
+ (void)closeContainer:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
+ (void)getBadgeImage:(id *)a0 label:(void *)a1 forNode:(struct TFENode { struct OpaqueNodeRef *x0; })a2 size:(double)a3;
+ (void)computeMenuItemsForPlugIn:(id)a0 target:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 selectedItems:(const void *)a2 context:(unsigned long long)a3 result:(const void *)a4;
+ (BOOL)plugIn:(id)a0 managesNodes:(const void *)a1 target:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
+ (void)initializePlugIns;
+ (void)synchronizeWithDiscoveredExtensions:(id)a0 error:(id)a1;
+ (void)extensionIsReady:(id)a0;
+ (void)tearDownOneExtension:(id)a0;
+ (void)tearDownPlugIns;
+ (id)hostForExtensionIdentifier:(const void *)a0;
+ (double)badgeSizeForIconSize:(double)a0;
+ (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })badgeLabelForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
+ (struct pair<NSImage *, TString> { id x0; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; } x1; })badgeImageAndLabelForNode:(struct TFENode { struct OpaqueNodeRef *x0; })a0 size:(double)a1;
+ (BOOL)badgeImageExistsForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
+ (void)computeMenuItemsForTarget:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 selectedItems:(const void *)a1 context:(unsigned long long)a2 result:(const void *)a3;

@end
