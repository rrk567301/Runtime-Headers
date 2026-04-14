@class NSString, NSDate;

@interface PKTransitAppletCommutePlan : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *expirationDate;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqualToCommutePlan:(id)a0;
- (id)initWithIdentifier:(id)a0 startDate:(id)a1 expirationDate:(id)a2 status:(unsigned long long)a3;

@end
