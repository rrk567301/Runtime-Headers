@interface WebResourcePrivate : NSObject {
    struct RefPtr<WebCore::ArchiveResource, WTF::RawPtrTraits<WebCore::ArchiveResource>, WTF::DefaultRefDerefTraits<WebCore::ArchiveResource>> { struct ArchiveResource *m_ptr; } coreResource;
}

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithCoreResource:(void *)a0;

@end
