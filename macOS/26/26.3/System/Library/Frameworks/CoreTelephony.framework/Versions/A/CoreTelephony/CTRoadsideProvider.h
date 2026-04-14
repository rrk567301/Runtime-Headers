@class NSString, NSArray;

@interface CTRoadsideProvider : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long providerId;
@property (retain, nonatomic) NSString *providerName;
@property (retain, nonatomic) NSString *bizId;
@property (nonatomic) BOOL supportsPayPerUse;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isCarrierProvider;
@property (retain, nonatomic) NSArray *associatedPhoneNumbers;

- (BOOL)isEqualToProvider:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
