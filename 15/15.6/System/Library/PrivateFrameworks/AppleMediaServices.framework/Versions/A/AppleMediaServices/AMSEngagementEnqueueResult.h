@class NSDictionary, NSArray, AMSEngagementRequest;

@interface AMSEngagementEnqueueResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSDictionary *data;
@property (retain) NSArray *actions;
@property (retain) AMSEngagementRequest *request;

+ (id)archiveClasses;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
