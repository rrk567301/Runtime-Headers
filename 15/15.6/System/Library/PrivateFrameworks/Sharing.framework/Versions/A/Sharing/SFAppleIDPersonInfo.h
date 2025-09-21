@class NSString, NSDate;

@interface SFAppleIDPersonInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDate *validUntilDate;
@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) long long certificateStatus;
@property (readonly, nonatomic) char didMatchEmail;
@property (readonly, nonatomic) char didMatchPhone;
@property (readonly, nonatomic) char isStale;
@property (readonly, nonatomic) NSString *matchedValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (char)isEqualToPersonInfo:(id)a0;

@end
