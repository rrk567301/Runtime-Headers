@class NSString;

@interface WebAVStreamDataParserListener : NSObject <AVStreamDataParserOutputHandling> {
    struct WeakObjCPtr<AVStreamDataParser> { id m_weakReference; } _parser;
}

@property struct ThreadSafeWeakPtr<WebCore::SourceBufferParserAVFObjC, WTF::NoTaggingTraits<WebCore::SourceBufferParserAVFObjC>> { struct TaggedPtr<WebCore::SourceBufferParserAVFObjC, WTF::NoTaggingTraits<WebCore::SourceBufferParserAVFObjC>> { unsigned long long m_ptr; } m_objectOfCorrectType; struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { struct ThreadSafeWeakPtrControlBlock *m_ptr; } m_controlBlock; } parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)streamDataParser:(id)a0 didFailToParseStreamDataWithError:(id)a1;
- (void)streamDataParser:(id)a0 didParseStreamDataAsAsset:(id)a1 withDiscontinuity:(BOOL)a2;
- (void)streamDataParser:(id)a0 didProvideContentKeyRequestInitializationData:(id)a1 forTrackID:(int)a2;
- (void)streamDataParser:(id)a0 didProvideMediaData:(struct opaqueCMSampleBuffer { } *)a1 forTrackID:(int)a2 mediaType:(id)a3 flags:(unsigned long long)a4;
- (void)streamDataParserWillProvideContentKeyRequestInitializationData:(id)a0 forTrackID:(int)a1;
- (id)initWithParser:(id)a0 parent:(void *)a1;
- (void)streamDataParser:(id)a0 didParseStreamDataAsAsset:(id)a1;

@end
