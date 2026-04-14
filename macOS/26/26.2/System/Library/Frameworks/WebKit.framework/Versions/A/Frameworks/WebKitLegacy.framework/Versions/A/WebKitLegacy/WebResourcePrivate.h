@interface WebResourcePrivate : NSObject {
    struct RefPtr<WebCore::ArchiveResource, WTF::RawPtrTraits<WebCore::ArchiveResource>, WTF::DefaultRefDerefTraits<WebCore::ArchiveResource>> { struct ArchiveResource *m_ptr; } coreResource;
}

+ (void)initialize;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;
- (void)dealloc;
- (id)initWithCoreResource:(void *)a0;

@end
