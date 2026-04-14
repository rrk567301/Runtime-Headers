@class NSData, NSString, NSUUID;

@interface WebAVContentKeyGroup : NSObject <WebAVContentKeyGrouping> {
    struct WeakObjCPtr<AVContentKeySession> { id m_weakReference; } _contentKeySession;
    struct WeakPtr<WebCore::ContentKeyGroupDataSource, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _dataSource;
    struct RetainPtr<NSUUID> { NSUUID *m_ptr; } _groupIdentifier;
}

@property (readonly, nonatomic) unsigned long long logIdentifier;
@property (readonly, nonatomic) const void *loggerPtr;
@property (readonly, nonatomic) struct { unsigned char x0; char *x1; unsigned char x2; char *x3; id x4; } *logChannel;
@property (readonly) NSData *contentProtectionSessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)expire;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)associateContentKeyRequest:(id)a0;
- (void)processContentKeyRequestWithIdentifier:(id)a0 initializationData:(id)a1 options:(id)a2;
- (id)initWithContentKeySession:(id)a0 dataSource:(void *)a1;

@end
