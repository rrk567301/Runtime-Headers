@interface WKDownloadProgress : NSProgress {
    struct RetainPtr<NSURLSessionDownloadTask> { void *m_ptr; } m_task;
    struct WeakPtr<WebKit::Download, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { void *m_ptr; } m_impl; } m_download;
    struct RefPtr<WebKit::SandboxExtension, WTF::RawPtrTraits<WebKit::SandboxExtension>, WTF::DefaultRefDerefTraits<WebKit::SandboxExtension>> { struct SandboxExtension *m_ptr; } m_sandboxExtension;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)publish;
- (void)unpublish;
- (id)initWithDownloadTask:(id)a0 download:(void *)a1 URL:(id)a2 sandboxExtension:(struct RefPtr<WebKit::SandboxExtension, WTF::RawPtrTraits<WebKit::SandboxExtension>, WTF::DefaultRefDerefTraits<WebKit::SandboxExtension>> { struct SandboxExtension *x0; })a3;
- (void)performCancel;

@end
