@class NSString;

@interface DMFReportingRequirements : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *reachableHostName;
@property (nonatomic) double updateCoalescenceInterval;
@property (nonatomic) BOOL requireActiveConnection;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
