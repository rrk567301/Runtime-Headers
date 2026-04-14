@class NSString, NSDate;

@interface RDEstimate : NSObject <NSCopying, NSSecureCoding> {
    unsigned int _priority;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) BOOL isInDisputedArea;

+ (id)estimatesForMontara;
+ (id)lastKnownEstimates;
+ (id)currentEstimates;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned int)getPriority;
- (id)initWithCountryCode:(id)a0 priority:(unsigned int)a1 timestamp:(id)a2 inDisputedArea:(BOOL)a3;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)priorityIsAtLeast:(unsigned int)a0;
- (id)dictionary;

@end
