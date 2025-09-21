@class NSString;

@interface DMFReportingRequirements : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *reachableHostName;
@property (nonatomic) double updateCoalescenceInterval;
@property (nonatomic) BOOL requireActiveConnection;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
