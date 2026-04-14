@class NSString;

@interface WebCoreTextTrackRepresentationCocoaHelper : NSObject <CALayerDelegate> {
    struct CheckedPtr<WebCore::TextTrackRepresentationCocoa, WTF::RawPtrTraits<WebCore::TextTrackRepresentationCocoa>> { struct TextTrackRepresentationCocoa *m_ptr; } _parent;
}

@property void *parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithParent:(void *)a0;
- (id).cxx_construct;
- (void)dealloc;

@end
