@class NSString, NSSet;
@protocol _WKWebAuthenticationPanelDelegate;

@interface _WKWebAuthenticationPanel : NSObject <WKObject> {
    struct ObjectStorage<API::WebAuthenticationPanel> { struct type { unsigned char __lx[88]; } data; } _panel;
    struct WeakPtr<WebKit::WebAuthenticationPanelClient, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { void *m_ptr; } m_impl; } _client;
    struct RetainPtr<NSMutableSet> { void *m_ptr; } _transports;
}

@property (weak, nonatomic) id<_WKWebAuthenticationPanelDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *relyingPartyID;
@property (readonly, copy, nonatomic) NSSet *transports;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *userName;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct PublicKeyCredentialCreationOptions { struct RpEntity { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x0; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x1; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x2; } x0; struct UserEntity { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x0; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x1; struct BufferSource { struct variant<WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { struct __impl<WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { union __union<std::__variant_detail::_Trait::_Available, 0UL, WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { char x0; struct __alt<0UL, WTF::RefPtr<JSC::ArrayBufferView>> { struct RefPtr<JSC::ArrayBufferView, WTF::RawPtrTraits<JSC::ArrayBufferView>, WTF::DefaultRefDerefTraits<JSC::ArrayBufferView>> { struct ArrayBufferView *x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL, WTF::RefPtr<JSC::ArrayBuffer>> { char x0; struct __alt<1UL, WTF::RefPtr<JSC::ArrayBuffer>> { struct RefPtr<JSC::ArrayBuffer, WTF::RawPtrTraits<JSC::ArrayBuffer>, WTF::DefaultRefDerefTraits<JSC::ArrayBuffer>> { struct ArrayBuffer *x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; } x0; } x2; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x3; } x1; struct BufferSource { struct variant<WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { struct __impl<WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { union __union<std::__variant_detail::_Trait::_Available, 0UL, WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { char x0; struct __alt<0UL, WTF::RefPtr<JSC::ArrayBufferView>> { struct RefPtr<JSC::ArrayBufferView, WTF::RawPtrTraits<JSC::ArrayBufferView>, WTF::DefaultRefDerefTraits<JSC::ArrayBufferView>> { struct ArrayBufferView *x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL, WTF::RefPtr<JSC::ArrayBuffer>> { char x0; struct __alt<1UL, WTF::RefPtr<JSC::ArrayBuffer>> { struct RefPtr<JSC::ArrayBuffer, WTF::RawPtrTraits<JSC::ArrayBuffer>, WTF::DefaultRefDerefTraits<JSC::ArrayBuffer>> { struct ArrayBuffer *x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; } x0; } x2; struct Vector<WebCore::PublicKeyCredentialCreationOptions::Parameters, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct Parameters *x0; unsigned int x1; unsigned int x2; } x3; struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; } x4; struct Vector<WebCore::PublicKeyCredentialDescriptor, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct PublicKeyCredentialDescriptor *x0; unsigned int x1; unsigned int x2; } x5; struct optional<WebCore::PublicKeyCredentialCreationOptions::AuthenticatorSelectionCriteria> { union { char x0; struct AuthenticatorSelectionCriteria { struct optional<WebCore::AuthenticatorAttachment> { union { char x0; int x1; } x0; BOOL x1; } x0; BOOL x1; int x2; } x1; } x0; BOOL x1; } x6; int x7; struct optional<WebCore::AuthenticationExtensionsClientInputs> { union { char x0; struct AuthenticationExtensionsClientInputs { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x0; BOOL x1; } x1; } x0; BOOL x1; } x8; })convertToCoreCreationOptionsWithOptions:(id)a0;
+ (struct PublicKeyCredentialRequestOptions { struct BufferSource { struct variant<WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { struct __impl<WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { union __union<std::__variant_detail::_Trait::_Available, 0UL, WTF::RefPtr<JSC::ArrayBufferView>, WTF::RefPtr<JSC::ArrayBuffer>> { char x0; struct __alt<0UL, WTF::RefPtr<JSC::ArrayBufferView>> { struct RefPtr<JSC::ArrayBufferView, WTF::RawPtrTraits<JSC::ArrayBufferView>, WTF::DefaultRefDerefTraits<JSC::ArrayBufferView>> { struct ArrayBufferView *x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL, WTF::RefPtr<JSC::ArrayBuffer>> { char x0; struct __alt<1UL, WTF::RefPtr<JSC::ArrayBuffer>> { struct RefPtr<JSC::ArrayBuffer, WTF::RawPtrTraits<JSC::ArrayBuffer>, WTF::DefaultRefDerefTraits<JSC::ArrayBuffer>> { struct ArrayBuffer *x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; } x0; } x0; struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; } x1; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x2; struct Vector<WebCore::PublicKeyCredentialDescriptor, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct PublicKeyCredentialDescriptor *x0; unsigned int x1; unsigned int x2; } x3; int x4; struct optional<WebCore::AuthenticatorAttachment> { union { char x0; int x1; } x0; BOOL x1; } x5; struct optional<WebCore::AuthenticationExtensionsClientInputs> { union { char x0; struct AuthenticationExtensionsClientInputs { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x0; BOOL x1; } x1; } x0; BOOL x1; } x6; })convertToCoreRequestOptionsWithOptions:(id)a0;
+ (id)getAllLocalAuthenticatorCredentials;
+ (id)getAllLocalAuthenticatorCredentialsWithAccessGroup:(id)a0;
+ (void)deleteLocalAuthenticatorCredentialWithID:(id)a0;
+ (void)clearAllLocalAuthenticatorCredentials;
+ (void)setUsernameForLocalCredentialWithID:(id)a0 username:(id)a1;
+ (BOOL)isUserVerifyingPlatformAuthenticatorAvailable;
+ (id)getClientDataJSONForAuthenticationType:(long long)a0 challenge:(id)a1 origin:(id)a2;
+ (id)encodeMakeCredentialCommandWithClientDataJSON:(id)a0 options:(id)a1 userVerificationAvailability:(long long)a2;
+ (id)encodeGetAssertionCommandWithClientDataJSON:(id)a0 options:(id)a1 userVerificationAvailability:(long long)a2;
+ (id)encodeMakeCredentialCommandWithClientDataHash:(id)a0 options:(id)a1 userVerificationAvailability:(long long)a2;
+ (id)encodeGetAssertionCommandWithClientDataHash:(id)a0 options:(id)a1 userVerificationAvailability:(long long)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)cancel;
- (void)makeCredentialWithChallenge:(id)a0 origin:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)makeCredentialWithClientDataHash:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)getAssertionWithChallenge:(id)a0 origin:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)getAssertionWithClientDataHash:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)setMockConfiguration:(id)a0;

@end
