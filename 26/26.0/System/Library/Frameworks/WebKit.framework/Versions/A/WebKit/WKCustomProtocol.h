@interface WKCustomProtocol : NSURLProtocol {
    struct RetainPtr<__CFRunLoop *> { struct __CFRunLoop *m_ptr; } _initializationRunLoop;
}

@property (readonly, nonatomic) struct Markable<WTF::ObjectIdentifierGeneric<WebKit::LegacyCustomProtocolIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long>, WTF::MarkableTraits<WTF::ObjectIdentifierGeneric<WebKit::LegacyCustomProtocolIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long>>> { struct ObjectIdentifierGeneric<WebKit::LegacyCustomProtocolIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long> { unsigned long long m_identifier; } m_value; } customProtocolID;
@property (readonly, nonatomic) struct __CFRunLoop { } *initializationRunLoop;

+ (id)canonicalRequestForRequest:(id)a0;
+ (BOOL)canInitWithRequest:(id)a0;
+ (BOOL)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;

- (void)startLoading;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stopLoading;
- (id)initWithRequest:(id)a0 cachedResponse:(id)a1 client:(id)a2;

@end
