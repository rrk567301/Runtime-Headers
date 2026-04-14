@class NSDictionary, NSArray, AMSEngagementRequest;

@interface AMSEngagementEnqueueResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *data;
@property (retain) NSArray *actions;
@property (retain) AMSEngagementRequest *request;

+ (id)archiveClasses;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
