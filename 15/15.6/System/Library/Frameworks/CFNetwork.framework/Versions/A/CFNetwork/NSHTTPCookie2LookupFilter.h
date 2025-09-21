@class NSString, NSURL, NSDate;

@interface NSHTTPCookie2LookupFilter : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *partition;
@property long long sameSite;
@property (copy, nonatomic) NSDate *newerThanCreationDate;
@property (copy, nonatomic) NSDate *newerThanExpirationDate;
@property (copy, nonatomic) NSDate *newerThanLastAccess;
@property (copy, nonatomic) NSDate *olderThanCreationDate;
@property (copy, nonatomic) NSDate *olderThanExpirationDate;
@property (copy, nonatomic) NSDate *olderThanLastAccess;
@property char secure;
@property char httpOnly;
@property char ignoreHostOnlyFlag;
@property char ignoreHTTPOnlyCookie;
@property char ignoreSecureFlag;
@property (copy, nonatomic) NSURL *inURL;
@property (copy, nonatomic) NSURL *mainDocumentURL;
@property (copy, nonatomic) NSURL *siteForCookies;
@property char isTopLevelNavigation;
@property char isSafe;
@property unsigned long long acceptPolicy;

- (void).cxx_destruct;
- (long long)_flags;
- (id)initWithCookie:(id)a0;
- (char)matchCookie:(id)a0;

@end
