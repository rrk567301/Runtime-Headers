@class NSString, NSDate;

@interface RDEstimate : NSObject <NSCopying, NSSecureCoding> {
    long long _priority;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSDate *timestamp;

+ (id)currentEstimates;
+ (id)lastKnownEstimates;
+ (id)currentEstimateSet;
+ (id)lastKnownEstimateSet;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionary;
- (long long)getPriority;
- (id)initWithCountryCode:(id)a0 priority:(long long)a1 timestamp:(id)a2;

@end
