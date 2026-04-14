@interface __NSPlaceholderURLComponents : NSURLComponents

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)user;
- (void)setPath:(id)a0;
- (id)query;
- (void)setQuery:(id)a0;
- (id)URL;
- (id)scheme;
- (void)setHost:(id)a0;
- (void)setPassword:(id)a0;
- (id)queryItems;
- (void)setPort:(id)a0;
- (id)string;
- (id)retain;
- (id)path;
- (id)password;
- (void)setScheme:(id)a0;
- (id)init;
- (unsigned long long)retainCount;
- (id)host;
- (id)initWithString:(id)a0;
- (oneway void)release;
- (id)port;
- (void)setUser:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfPassword;
- (void)setEncodedHost:(id)a0;
- (id)URLRelativeToURL:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfFragment;
- (id)encodedHost;
- (id)fragment;
- (id)percentEncodedFragment;
- (id)percentEncodedHost;
- (id)percentEncodedPassword;
- (id)percentEncodedPath;
- (id)percentEncodedQuery;
- (id)percentEncodedQueryItems;
- (id)percentEncodedUser;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfHost;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfPath;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfPort;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfQuery;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfScheme;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfUser;
- (void)setFragment:(id)a0;
- (void)setPercentEncodedFragment:(id)a0;
- (void)setPercentEncodedHost:(id)a0;
- (void)setPercentEncodedPassword:(id)a0;
- (void)setPercentEncodedPath:(id)a0;
- (void)setPercentEncodedQuery:(id)a0;
- (void)setPercentEncodedUser:(id)a0;
- (void)setQueryItems:(id)a0;
- (id)initWithURL:(id)a0 resolvingAgainstBaseURL:(BOOL)a1;
- (id)initWithString:(id)a0 encodingInvalidCharacters:(BOOL)a1;
- (void)setPercentEncodedQueryItems:(id)a0;

@end
