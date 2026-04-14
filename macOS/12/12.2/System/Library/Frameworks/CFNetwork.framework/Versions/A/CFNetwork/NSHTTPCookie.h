@class NSString, NSDictionary, NSURL, NSDate, NSArray, NSHTTPCookieInternal;

@interface NSHTTPCookie : NSObject <NSCoding> {
    NSHTTPCookieInternal *_cookiePrivate;
}

@property (readonly) struct HTTPCookie { void /* function */ **x0; } *_inner;
@property (readonly, copy) NSDictionary *properties;
@property (readonly) unsigned long long version;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *value;
@property (readonly, copy) NSDate *expiresDate;
@property (readonly, getter=isSessionOnly) BOOL sessionOnly;
@property (readonly, copy) NSString *domain;
@property (readonly, copy) NSString *path;
@property (readonly, getter=isSecure) BOOL secure;
@property (readonly, getter=isHTTPOnly) BOOL HTTPOnly;
@property (readonly, copy) NSString *comment;
@property (readonly, copy) NSURL *commentURL;
@property (readonly, copy) NSArray *portList;
@property (readonly, copy) NSString *sameSitePolicy;

+ (id)cookieWithProperties:(id)a0;
+ (id)cookiesWithResponseHeaderFields:(id)a0 forURL:(id)a1;
+ (id)requestHeaderFieldsWithCookies:(id)a0;
+ (id)cookieWithCFHTTPCookie:(struct OpaqueCFHTTPCookie { } *)a0;
+ (id)_cf2nsCookies:(struct __CFArray { } *)a0;
+ (const struct __CFArray { } *)_ns2cfCookies:(id)a0;
+ (id)_parsedCookiesWithResponseHeaderFields:(id)a0 forURL:(id)a1;
+ (id)_cookieForSetCookieString:(id)a0 forURL:(id)a1 partition:(id)a2;

- (id)replacementObjectForPortCoder:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)_key;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProperties:(id)a0;
- (struct HTTPCookie { void /* function */ **x0; } *)_inner;
- (id)_initWithInternal:(id)a0;
- (id)_storagePartition;
- (id)_initWithProperties:(id)a0 fromString:(BOOL)a1;
- (id)_initWithCookie:(id)a0 partition:(id)a1;
- (id)_initWithHeader:(const struct CompactCookieHeader { } *)a0;
- (id)_initWithReference:(const struct CompactCookieArray { } *)a0 index:(long long)a1;
- (id)initWithCFHTTPCookie:(struct OpaqueCFHTTPCookie { } *)a0;
- (const struct OpaqueCFHTTPCookie { } *)_GetInternalCFHTTPCookie;
- (const struct OpaqueCFHTTPCookie { } *)_CFHTTPCookie;
- (id)Name;
- (id)Value;
- (id)Domain;
- (id)Path;
- (id)Expires;
- (id)Comment;
- (id)CommentURL;
- (id)StoragePartition;
- (id)SameSitePolicy;
- (id)OriginURL;
- (id)Version;
- (id)Secure;
- (id)Discard;
- (id)Port;
- (id)MaxAge;
- (long long)_compareForHeaderOrder:(id)a0;
- (BOOL)_isExpired;

@end
