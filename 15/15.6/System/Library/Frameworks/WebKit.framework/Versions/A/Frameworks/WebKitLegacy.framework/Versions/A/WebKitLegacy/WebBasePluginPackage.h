@class NSMutableSet;

@interface WebBasePluginPackage : NSObject {
    NSMutableSet *pluginDatabases;
    struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } path;
    struct PluginInfo { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } name; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } file; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } desc; struct Vector<WebCore::MimeClassInfo, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct MimeClassInfo *m_buffer; unsigned int m_capacity; unsigned int m_size; } mimes; BOOL isApplicationPlugin; unsigned char clientLoadPolicy; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } bundleIdentifier; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } versionString; } pluginInfo;
    struct RetainPtr<__CFBundle *> { void *m_ptr; } cfBundle;
    void /* function */ *BP_CreatePluginMIMETypesPreferences;
}

+ (void)initialize;
+ (id)pluginWithPath:(id)a0;

- (void)dealloc;
- (char)load;
- (void).cxx_destruct;
- (const void *)path;
- (id).cxx_construct;
- (struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; })bundleIdentifier;
- (struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; })bundleVersion;
- (id)MIMETypeForExtension:(const void *)a0;
- (id)initWithPath:(id)a0;
- (void)unload;
- (unsigned int)versionNumber;
- (id)_objectForInfoDictionaryKey:(id)a0;
- (void)createPropertyListFile;
- (char)getPluginInfoFromPLists;
- (char)isJavaPlugIn;
- (char)isNativeLibraryData:(id)a0;
- (char)isQuickTimePlugIn;
- (id)pListForPath:(id)a0 createFile:(char)a1;
- (const void *)pluginInfo;
- (char)supportsExtension:(const void *)a0;
- (char)supportsMIMEType:(const void *)a0;
- (void)wasAddedToPluginDatabase:(id)a0;
- (void)wasRemovedFromPluginDatabase:(id)a0;

@end
