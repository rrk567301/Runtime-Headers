@class NSString, NSDictionary, NSData, NSURL, NSInputStream, NSURLRequestInternal;

@interface NSURLRequest : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {
    NSURLRequestInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *HTTPMethod;
@property (readonly, copy) NSDictionary *allHTTPHeaderFields;
@property (readonly, copy) NSData *HTTPBody;
@property (readonly, retain) NSInputStream *HTTPBodyStream;
@property (readonly) BOOL HTTPShouldHandleCookies;
@property (readonly) BOOL HTTPShouldUsePipelining;
@property (readonly) void *_inner;
@property (readonly, copy) NSURL *URL;
@property (readonly) unsigned long long cachePolicy;
@property (readonly) double timeoutInterval;
@property (readonly, copy) NSURL *mainDocumentURL;
@property (readonly) unsigned long long networkServiceType;
@property (readonly) BOOL allowsCellularAccess;
@property (readonly) BOOL allowsExpensiveNetworkAccess;
@property (readonly) BOOL allowsConstrainedNetworkAccess;
@property (readonly) BOOL assumesHTTP3Capable;
@property (readonly) unsigned long long attribution;
@property (readonly) BOOL requiresDNSSECValidation;

+ (id)requestWithURL:(id)a0 cachePolicy:(unsigned long long)a1 timeoutInterval:(double)a2;
+ (id)requestWithURL:(id)a0;
+ (void)setDefaultTimeoutInterval:(double)a0;
+ (double)defaultTimeoutInterval;
+ (BOOL)allowsAnyHTTPSCertificateForHost:(id)a0;
+ (void)setAllowsAnyHTTPSCertificate:(BOOL)a0 forHost:(id)a1;
+ (id)allowsSpecificHTTPSCertificateForHost:(id)a0;
+ (void)setAllowsSpecificHTTPSCertificate:(id)a0 forHost:(id)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithURL:(id)a0 cachePolicy:(unsigned long long)a1 timeoutInterval:(double)a2;
- (id)valueForHTTPHeaderField:(id)a0;
- (id)_initWithInternal:(id)a0;
- (id)_allHTTPHeaderFieldsAsArrays;
- (BOOL)_isSafeRequestForBackgroundDownload;
- (id)_initWithCFURLRequest:(struct _CFURLRequest { } *)a0;
- (struct _CFURLRequest { } *)_CFURLRequest;
- (const struct __CFURL { } *)cfURL;
- (id)_copyReplacingURLWithURL:(id)a0;
- (BOOL)_URLHasScheme:(id)a0;
- (id)_propertyForKey:(id)a0;
- (void)_setProperty:(id)a0 forKey:(id)a1;
- (void)_removePropertyForKey:(id)a0;
- (id)_allProtocolProperties;
- (id)boundInterfaceIdentifier;
- (BOOL)preventsIdleSystemSleep;
- (BOOL)_isKnownTracker;
- (BOOL)_needsNetworkTrackingPrevention;
- (BOOL)_isNonAppInitiated;
- (id)_trackerContext;
- (BOOL)_privacyProxyFailClosed;
- (BOOL)_privacyProxyFailClosedForUnreachableNonMainHosts;
- (BOOL)_prohibitPrivacyProxy;
- (BOOL)_allowPrivateAccessTokensForThirdParty;
- (id)HTTPContentType;
- (id)HTTPExtraCookies;
- (id)HTTPReferrer;
- (id)HTTPUserAgent;
- (id)contentDispositionEncodingFallbackArray;
- (unsigned long long)expectedWorkload;
- (double)_timeWindowDelay;
- (double)_timeWindowDuration;
- (id)_startTimeoutDate;
- (BOOL)_requiresShortConnectionTimeout;
- (double)_payloadTransmissionTimeout;
- (BOOL)_preventHSTSStorage;
- (BOOL)_ignoreHSTS;
- (BOOL)_schemeWasUpgradedDueToDynamicHSTS;
- (BOOL)_isIdempotent;

@end
