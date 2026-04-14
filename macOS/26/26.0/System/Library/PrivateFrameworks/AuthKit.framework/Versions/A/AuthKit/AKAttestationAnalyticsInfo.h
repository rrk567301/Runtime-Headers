@class NSString;

@interface AKAttestationAnalyticsInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *endPointVIP;
@property (copy, nonatomic) NSString *requestMethod;
@property (nonatomic) unsigned long long headerSize;
@property (nonatomic) unsigned long long bodySize;
@property (copy, nonatomic) NSString *errorDomain;
@property (nonatomic) long long errorCode;
@property (nonatomic) long long responseCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
