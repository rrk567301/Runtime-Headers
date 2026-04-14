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

+ (id)requestWithURL:(id)a0;
+ (id)requestWithURL:(id)a0 cachePolicy:(unsigned long long)a1 timeoutInterval:(double)a2;
+ (BOOL)allowsAnyHTTPSCertificateForHost:(id)a0;
+ (id)allowsSpecificHTTPSCertificateForHost:(id)a0;
+ (double)defaultTimeoutInterval;
+ (void)setAllowsAnyHTTPSCertificate:(BOOL)a0 forHost:(id)a1;
+ (void)setAllowsSpecificHTTPSCertificate:(id)a0 forHost:(id)a1;
+ (void)setDefaultTimeoutInterval:(double)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithURL:(id)a0 cachePolicy:(unsigned long long)a1 timeoutInterval:(double)a2;
- (id)valueForHTTPHeaderField:(id)a0;
- (id)HTTPExtraCookies;
- (id)HTTPReferrer;
- (id)HTTPUserAgent;
- (BOOL)_requiresShortConnectionTimeout;
- (id)_trackerContext;
- (id)HTTPContentType;
- (BOOL)_isKnownTracker;
- (BOOL)_needsNetworkTrackingPrevention;
- (struct _CFURLRequest { } *)_CFURLRequest;
- (BOOL)_URLHasScheme:(id)a0;
- (id)_allHTTPHeaderFieldsAsArrays;
- (id)_allProtocolProperties;
- (BOOL)_allowPrivateAccessTokensForThirdParty;
- (id)_copyReplacingURLWithURL:(id)a0;
- (BOOL)_ignoreHSTS;
- (id)_initWithCFURLRequest:(struct _CFURLRequest { } *)a0;
- (id)_initWithInternal:(id)a0;
- (BOOL)_isIdempotent;
- (BOOL)_isNonAppInitiated;
- (BOOL)_isSafeRequestForBackgroundDownload;
- (double)_payloadTransmissionTimeout;
- (BOOL)_preventHSTSStorage;
- (BOOL)_privacyProxyFailClosed;
- (BOOL)_privacyProxyFailClosedForUnreachableNonMainHosts;
- (BOOL)_prohibitPrivacyProxy;
- (id)_propertyForKey:(id)a0;
- (void)_removePropertyForKey:(id)a0;
- (BOOL)_schemeWasUpgradedDueToDynamicHSTS;
- (void)_setProperty:(id)a0 forKey:(id)a1;
- (id)_startTimeoutDate;
- (double)_timeWindowDelay;
- (double)_timeWindowDuration;
- (id)boundInterfaceIdentifier;
- (const struct __CFURL { } *)cfURL;
- (id)contentDispositionEncodingFallbackArray;
- (unsigned long long)expectedWorkload;
- (BOOL)preventsIdleSystemSleep;

@end
