@class NSString, NSURL;

@interface WFWhitelistSite : NSObject

@property (retain) NSString *urlString;
@property (retain) NSURL *url;
@property (readonly, retain) NSString *domainName;

- (id)description;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithURLString:(id)a0;
- (BOOL)hasMetasitePrefix:(id)a0;

@end
