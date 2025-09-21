@class NSString, NSDate;

@interface AMSContentInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *cacheKey;
@property (retain) NSDate *created;
@property (retain) NSDate *expires;
@property (retain) NSString *path;
@property (retain) NSString *version;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
