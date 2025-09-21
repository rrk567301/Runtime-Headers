@interface WebResourcePrivate : NSObject {
    struct RefPtr<WebCore::ArchiveResource, WTF::RawPtrTraits<WebCore::ArchiveResource>, WTF::DefaultRefDerefTraits<WebCore::ArchiveResource>> { struct ArchiveResource *m_ptr; } coreResource;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCoreResource:(void *)a0;

@end
