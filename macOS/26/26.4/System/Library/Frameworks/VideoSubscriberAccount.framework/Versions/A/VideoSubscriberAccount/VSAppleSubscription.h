@class NSString, NSArray;

@interface VSAppleSubscription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *customerID;
@property (retain, nonatomic) NSArray *productCodes;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)prettyPrint;
- (id)componentsForPrinting:(id)a0;
- (id)initWithCustomerID:(id)a0 productCodes:(id)a1;

@end
