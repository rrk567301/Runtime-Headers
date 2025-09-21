@class NSString, NSDate;

@interface NSMutableHTTPCookie2 : NSHTTPCookie2

@property (retain) NSString *name;
@property (retain) NSString *value;
@property (retain) NSString *domain;
@property (retain) NSString *path;
@property (retain) NSDate *expirationDate;
@property char secure;
@property char httpOnly;
@property char hostOnly;
@property (retain) NSString *partition;
@property long long source;
@property long long sameSite;

- (char)isEqual:(id)a0;
- (void)setName:(id)a0;
- (void)setPath:(id)a0;
- (void)setExpirationDate:(id)a0;
- (void)setValue:(id)a0;
- (void)setDomain:(id)a0;
- (void)setSource:(long long)a0;
- (id)initWithName:(id)a0 value:(id)a1 domain:(id)a2;
- (void)setHostOnly:(char)a0;
- (void)setHttpOnly:(char)a0;
- (void)setPartition:(id)a0;
- (void)setSameSite:(long long)a0;
- (void)setSecure:(char)a0;

@end
