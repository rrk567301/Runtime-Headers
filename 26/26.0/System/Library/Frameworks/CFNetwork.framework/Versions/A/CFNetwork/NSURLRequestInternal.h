@interface NSURLRequestInternal : NSObject <NSCopying> {
    struct URLRequest { void /* function */ **_vptr$CoreLoggable; struct __CFURL *fURL; unsigned long long fCachePolicy; double fTimeout; struct __CFURL *fMainDocumentURL; struct __CFDictionary *fProtocolProperties; struct __CFDictionary *fProxyDict; struct HTTPRequest *fHTTPRequest; struct Flags { unsigned char _flag_SHOULD_HANDLE_HTTP_COOKIES : 1; unsigned char _flag_IS_MUTABLE : 1; unsigned char _flag_SHOULD_START_SYNCHRONOUSLY : 1; unsigned char _flag_ALLOW_CELLULAR : 1; unsigned char _flag_PREVENTSIDLESYSTEMSLEEP : 1; unsigned char _flag_SET_EXPLICIT_SHOULD_HANDLE_COOKIES : 1; unsigned char _flag_SET_EXPLICIT_NETWORK_SERVICE_TYPE : 1; unsigned char _flag_SET_EXPLICIT_ALLOWS_CELLULAR : 1; unsigned char _flag_SET_EXPLICIT_PREVENTS_IDLE_SYSTEM_SLEEP : 1; unsigned char _flag_SET_EXPLICIT_SHOULD_PIPELINE : 1; unsigned char _flag_SET_EXPLICIT_CACHE_POLICY : 1; unsigned char _flag_SET_EXPLICIT_TIMEOUT : 1; unsigned char _flag_SET_EXPLICIT_PROXY_DICT : 1; unsigned char _flag_SET_EXPLICIT_SSL_PROPERTIES : 1; unsigned char _flag_SET_EXPLICIT_SHOULD_START_SYNCHRONOUSLY : 1; } fFlags; struct __CFDictionary *fSSLProps; struct __CFArray *fContentDispositionHeaderEncodingFallbackArray; long long fRequestPriority; unsigned long long fAllowedProtocolTypes; int fNetworkServiceType; struct __CFString *fBoundInterfaceIdentifier; struct __CFString *fTrackerContext; struct __CFString *fCookiePartitionIdentifier; double fTimeWindowDelay; double fTimeWindowDuration; double fStartTimeoutTime; unsigned char fRequiresShortConnectionTimeout; unsigned char fPreventHSTSStorage; unsigned char fIgnoreHSTS; unsigned char fSchemeWasUpgradedDueToDynamicHSTS; unsigned char fAssumesHTTP3Capable; unsigned char fKnownTracker; unsigned char fPrivacyProxyFailClosed; unsigned char fPrivacyProxyStrictFailClosed; unsigned char fPrivacyProxyFailClosedForUnreachableNonMainHosts; unsigned char fPrivacyProxyFailClosedForUnreachableHosts; unsigned char fProhibitPrivacyProxy; unsigned char fAllowPrivateAccessTokensForThirdParty; unsigned char fUseEnhancedPrivacyMode; unsigned char fBlockTrackers; unsigned char fFailInsecureLoadWithHTTPSDNSRecord; unsigned char fIsWebSearchContent; unsigned char fAllowOnlyPartitionedCookies; int fRequiresDNSSECValidation; unsigned char fAllowsPersistentDNS; unsigned long long fAttribution; double fPayloadTransmissionTimeout; struct __CFDictionary *fATSOverrides; struct unique_ptr<_CFHSTSPolicy, Deleter_CFRelease> { struct _CFHSTSPolicy *__ptr_; } fHSTSPolicy; int fAllowsExpensiveNetworkAccess; int fAllowsConstrainedNetworkAccess; int fAllowsUCA; struct __CFURLStorageSession *_explicitStorageSession; } _request;
}

@property (readonly) void *_inner;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void *)_inner;
- (id)init;
- (id)_initWithMessage:(struct __CFHTTPMessage { } *)a0 bodyParts:(struct __CFArray { } *)a1 cachePolicy:(unsigned long long)a2 timeout:(double)a3 mainDocumentURL:(struct __CFURL { } *)a4 mutable:(unsigned char)a5;
- (id).cxx_construct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
