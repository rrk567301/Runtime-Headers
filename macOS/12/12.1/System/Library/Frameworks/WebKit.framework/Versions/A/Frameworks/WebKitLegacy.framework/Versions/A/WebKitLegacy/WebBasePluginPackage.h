@class NSMutableSet;

@interface WebBasePluginPackage : NSObject {
    NSMutableSet *pluginDatabases;
    struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } path;
    struct PluginInfo { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } name; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } file; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } desc; struct Vector<WebCore::MimeClassInfo, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct MimeClassInfo *m_buffer; unsigned int m_capacity; unsigned int m_size; } mimes; BOOL isApplicationPlugin; unsigned char clientLoadPolicy; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } bundleIdentifier; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } versionString; } pluginInfo;
    struct RetainPtr<__CFBundle *> { void *m_ptr; } cfBundle;
    void /* function */ *BP_CreatePluginMIMETypesPreferences;
}

+ (void)initialize;
+ (id)pluginWithPath:(id)a0;

- (void)dealloc;
- (BOOL)load;
- (void).cxx_destruct;
- (const void *)path;
- (struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; })bundleIdentifier;
- (id).cxx_construct;
- (struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; })bundleVersion;
- (void)unload;
- (id)initWithPath:(id)a0;
- (unsigned int)versionNumber;
- (id)MIMETypeForExtension:(const void *)a0;
- (const void *)pluginInfo;
- (void)createPropertyListFile;
- (id)_objectForInfoDictionaryKey:(id)a0;
- (id)pListForPath:(id)a0 createFile:(BOOL)a1;
- (BOOL)getPluginInfoFromPLists;
- (BOOL)supportsExtension:(const void *)a0;
- (BOOL)supportsMIMEType:(const void *)a0;
- (BOOL)isQuickTimePlugIn;
- (BOOL)isJavaPlugIn;
- (BOOL)isNativeLibraryData:(id)a0;
- (void)wasAddedToPluginDatabase:(id)a0;
- (void)wasRemovedFromPluginDatabase:(id)a0;

@end
