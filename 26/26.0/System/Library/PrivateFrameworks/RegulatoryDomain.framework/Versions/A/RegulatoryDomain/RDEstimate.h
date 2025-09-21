@class NSString, NSDate;

@interface RDEstimate : NSObject <NSCopying, NSSecureCoding> {
    unsigned int _priority;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) BOOL isInDisputedArea;

+ (id)lastKnownEstimates;
+ (id)currentEstimates;
+ (id)estimatesForMontara;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)priorityIsAtLeast:(unsigned int)a0;
- (id)initWithCountryCode:(id)a0 priority:(unsigned int)a1 timestamp:(id)a2 inDisputedArea:(BOOL)a3;
- (id)initWithCoder:(id)a0;
- (unsigned int)getPriority;
- (id)dictionary;
- (void).cxx_destruct;

@end
