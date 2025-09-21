@class WebResource, NSArray;

@interface WebArchivePrivate : NSObject {
    struct RetainPtr<WebResource> { WebResource *m_ptr; } cachedMainResource;
    struct RetainPtr<NSArray> { NSArray *m_ptr; } cachedSubresources;
    struct RetainPtr<NSArray> { NSArray *m_ptr; } cachedSubframeArchives;
    struct RefPtr<WebCore::LegacyWebArchive, WTF::RawPtrTraits<WebCore::LegacyWebArchive>, WTF::DefaultRefDerefTraits<WebCore::LegacyWebArchive>> { struct LegacyWebArchive *m_ptr; } coreArchive;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setCoreArchive:(void *)a0;
- (void *)coreArchive;
- (id)initWithCoreArchive:(void *)a0;

@end
