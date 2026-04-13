@interface __NSConcreteURLComponents : NSURLComponents <NSCopying> {
    struct __CFURLComponents { } *_components;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)string;
- (id)scheme;
- (id)host;
- (id)port;
- (id)user;
- (id)password;
- (id)query;
- (id)fragment;
- (id)initWithString:(id)a0;
- (id)path;
- (id)URL;
- (id)initWithURL:(id)a0 resolvingAgainstBaseURL:(BOOL)a1;
- (void)setScheme:(id)a0;
- (void)setHost:(id)a0;
- (void)setPath:(id)a0;
- (void)setFragment:(id)a0;
- (id)queryItems;
- (void)setQuery:(id)a0;
- (void)setQueryItems:(id)a0;
- (void)setPort:(id)a0;
- (id)URLRelativeToURL:(id)a0;
- (void)setUser:(id)a0;
- (void)setPassword:(id)a0;
- (id)percentEncodedUser;
- (void)setPercentEncodedUser:(id)a0;
- (id)percentEncodedPassword;
- (void)setPercentEncodedPassword:(id)a0;
- (id)percentEncodedHost;
- (void)setPercentEncodedHost:(id)a0;
- (id)percentEncodedPath;
- (void)setPercentEncodedPath:(id)a0;
- (id)percentEncodedQuery;
- (void)setPercentEncodedQuery:(id)a0;
- (id)percentEncodedFragment;
- (void)setPercentEncodedFragment:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfScheme;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfUser;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfPassword;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfHost;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfPort;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfPath;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfQuery;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfFragment;
- (id)percentEncodedQueryItems;
- (void)setPercentEncodedQueryItems:(id)a0;

@end
