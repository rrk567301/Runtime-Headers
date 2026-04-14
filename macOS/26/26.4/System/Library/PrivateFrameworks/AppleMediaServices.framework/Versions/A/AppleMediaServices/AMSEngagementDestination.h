@class NSString;

@interface AMSEngagementDestination : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *identifier;
@property BOOL allowsResponse;
@property unsigned long long components;

- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
