@class NSString;

@interface DMFReportingRequirements : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *reachableHostName;
@property (nonatomic) double updateCoalescenceInterval;
@property (nonatomic) char requireActiveConnection;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
