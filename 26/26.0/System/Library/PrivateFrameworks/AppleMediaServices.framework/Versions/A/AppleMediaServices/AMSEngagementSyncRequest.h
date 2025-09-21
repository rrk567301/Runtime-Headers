@class NSArray, NSDictionary, NSString;

@interface AMSEngagementSyncRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *apps;
@property (retain) NSDictionary *context;
@property (retain) NSString *origin;
@property (retain) NSString *logKey;
@property double timeout;

+ (id)archiveClasses;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
