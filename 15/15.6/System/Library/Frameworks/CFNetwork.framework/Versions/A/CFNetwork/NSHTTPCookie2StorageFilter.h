@class NSURL, NSString;

@interface NSHTTPCookie2StorageFilter : NSObject {
    char _isTrusted;
    char _isTrustedCached;
    NSString *_urlScheme;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSURL *mainDocumentURL;
@property (retain, nonatomic) NSURL *siteForCookies;
@property (retain, nonatomic) NSString *partition;
@property char isTopLevelNavigation;
@property char isSafe;
@property char overwriteHTTPOnlyCookies;
@property unsigned long long acceptPolicy;

- (id)init;
- (void).cxx_destruct;
- (char)isTrusted;

@end
