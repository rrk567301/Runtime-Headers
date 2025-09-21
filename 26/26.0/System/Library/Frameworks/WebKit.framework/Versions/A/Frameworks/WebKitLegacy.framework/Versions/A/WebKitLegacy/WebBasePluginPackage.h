@class NSMutableSet;

@interface WebBasePluginPackage : NSObject {
    NSMutableSet *pluginDatabases;
    struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } path;
    struct PluginInfo { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } name; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } file; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } desc; struct Vector<WebCore::MimeClassInfo, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct MimeClassInfo *m_buffer; unsigned int m_capacity; unsigned int m_size; } mimes; BOOL isApplicationPlugin; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } bundleIdentifier; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } versionString; } pluginInfo;
    struct RetainPtr<__CFBundle *> { struct __CFBundle *m_ptr; } cfBundle;
    void /* function */ *BP_CreatePluginMIMETypesPreferences;
}

+ (void)initialize;
+ (id)pluginWithPath:(id)a0;

- (id)initWithPath:(id)a0;
- (BOOL)load;
- (struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; })bundleVersion;
- (struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; })bundleIdentifier;
- (void)unload;
- (unsigned int)versionNumber;
- (void)dealloc;
- (const void *)path;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)MIMETypeForExtension:(const void *)a0;
- (id)_objectForInfoDictionaryKey:(id)a0;
- (void)createPropertyListFile;
- (BOOL)getPluginInfoFromPLists;
- (BOOL)isJavaPlugIn;
- (BOOL)isNativeLibraryData:(id)a0;
- (BOOL)isQuickTimePlugIn;
- (id)pListForPath:(id)a0 createFile:(BOOL)a1;
- (const void *)pluginInfo;
- (BOOL)supportsExtension:(const void *)a0;
- (BOOL)supportsMIMEType:(const void *)a0;
- (void)wasAddedToPluginDatabase:(id)a0;
- (void)wasRemovedFromPluginDatabase:(id)a0;

@end
