@class NSString;

@interface WebGeolocationPolicyListener : NSObject <WebAllowDenyPolicyListener> {
    struct RefPtr<WebCore::Geolocation, WTF::RawPtrTraits<WebCore::Geolocation>, WTF::DefaultRefDerefTraits<WebCore::Geolocation>> { struct Geolocation *m_ptr; } _geolocation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deny;
- (void).cxx_destruct;
- (void)allow;
- (id).cxx_construct;
- (id)initWithGeolocation:(struct reference_wrapper<WebCore::Geolocation> { struct Geolocation *x0; })a0;

@end
