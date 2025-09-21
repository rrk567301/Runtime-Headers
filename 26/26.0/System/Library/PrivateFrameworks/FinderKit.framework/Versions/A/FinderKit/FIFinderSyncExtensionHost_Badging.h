@class __cap_, NSString, NSData, __end_, NSExtension, NSDictionary, NSObject, NSImage;
@protocol FIFinderSyncExtensionProtocol;

@interface FIFinderSyncExtensionHost_Badging : NSExtensionContext <FIFinderSyncExtensionHostProtocol, NSMenuDelegate> {
    NSObject<FIFinderSyncExtensionProtocol> *_remote;
    struct unordered_map<TString, NSImage *, std::hash<TString>, std::equal_to<TString>, std::allocator<std::pair<const TString, NSImage *>>> { struct __hash_table<std::__hash_value_type<TString, NSImage *>, std::__unordered_map_hasher<TString, std::__hash_value_type<TString, NSImage *>, std::hash<TString>, std::equal_to<TString>>, std::__unordered_map_equal<TString, std::__hash_value_type<TString, NSImage *>, std::equal_to<TString>, std::hash<TString>>, std::allocator<std::__hash_value_type<TString, NSImage *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TString, NSImage *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TString, NSImage *>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TString, NSImage *>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<TString, NSImage *>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _badgeIDImages;
    struct unordered_map<TString, TString, std::hash<TString>, std::equal_to<TString>, std::allocator<std::pair<const TString, TString>>> { struct __hash_table<std::__hash_value_type<TString, TString>, std::__unordered_map_hasher<TString, std::__hash_value_type<TString, TString>, std::hash<TString>, std::equal_to<TString>>, std::__unordered_map_equal<TString, std::__hash_value_type<TString, TString>, std::equal_to<TString>, std::hash<TString>>, std::allocator<std::__hash_value_type<TString, TString>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TString, TString>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TString, TString>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TString, TString>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<TString, TString>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _badgeIDLabels;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _toolbarItemName;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _toolbarToolTip;
    NSData *_toolbarImageData;
    BOOL _toolbarImageIsTemplate;
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct TFENode *__cap_; } _interestedRoots;
    struct vector<NSURL *, std::allocator<NSURL *>> { __end_ **__begin_; __cap_ **x0; id *x1; } _unresolvedRoots;
    struct unordered_map<TFENode, TString, std::hash<TFENode>, std::equal_to<TFENode>, std::allocator<std::pair<const TFENode, TString>>> { struct __hash_table<std::__hash_value_type<TFENode, TString>, std::__unordered_map_hasher<TFENode, std::__hash_value_type<TFENode, TString>, std::hash<TFENode>, std::equal_to<TFENode>>, std::__unordered_map_equal<TFENode, std::__hash_value_type<TFENode, TString>, std::equal_to<TFENode>, std::hash<TFENode>>, std::allocator<std::__hash_value_type<TFENode, TString>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, TString>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, TString>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, TString>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, TString>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _nodeToBadgeIDMap;
    NSImage *_containingAppIcon;
}

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) id requestIdentifier;
@property (copy, nonatomic) NSDictionary *toolbarItemDictionary;
@property (nonatomic) BOOL finishedRegisteringInterestedURLs;
@property (nonatomic) BOOL implementsCollaboration;
@property (nonatomic) BOOL fetchedContainingAppIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)menuNeedsUpdate:(id)a0;
- (void)dealloc;
- (id)remote;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithInputItems:(id)a0;
- (void)closeContainer:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })toolbarItemName;
- (BOOL)allowedToRegisterForContainer:(struct TFENode { struct OpaqueNodeRef *x0; })a0;
- (id)arrayOfInterestedURLStrings;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })badgeIdentifierForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (id)badgeImageForIdentifier:(const void *)a0;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })badgeLabelForIdentifier:(const void *)a0;
- (void)checkUnresolvedRootsAsync;
- (void)configureFromAttributes;
- (id)containingAppIcon:(const void *)a0;
- (void)executePlugInCommand:(id)a0;
- (void)finishedRegisteringInterestInContainers;
- (id)imageForToolbarItem:(const void *)a0;
- (BOOL)interestedInNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)managesNodes:(const void *)a0 target:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (void)openContainer:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)registerForDirectoryAtURL:(id)a0;
- (void)registerFutureInterestInDirectoryURL:(id)a0;
- (void)registerInterestInContainer:(struct TFENode { struct OpaqueNodeRef *x0; })a0;
- (void)replyWithMessageInterfaceNames:(id)a0 forURL:(id)a1;
- (void)setBadgeIdentifiersForURLs:(id)a0;
- (void)setBadgeImageDictionary:(id)a0 label:(id)a1 forIdentifier:(id)a2;
- (void)setContainingAppIcon:(id)a0;
- (void)setToolbarItemName:(id)a0 imageData:(id)a1 isTemplate:(BOOL)a2 toolTip:(id)a3;
- (id)sidebarIconForFolder:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 asyncCallback:(const void *)a1;
- (void)tearDownWhileLocked;
- (id)toolbarImageData;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })toolbarToolTip;
- (void)unregisterForDirectoryAtURL:(id)a0;
- (void)updateSidebarIconForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)updatedBadgeForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;

@end
