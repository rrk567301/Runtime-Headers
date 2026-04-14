@class NSString;

@interface AMSEngagementDestination : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *identifier;
@property BOOL allowsResponse;
@property unsigned long long components;

- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
