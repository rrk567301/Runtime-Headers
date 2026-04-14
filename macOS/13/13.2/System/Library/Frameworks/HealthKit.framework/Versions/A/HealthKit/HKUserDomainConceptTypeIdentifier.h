@class NSString;

@interface HKUserDomainConceptTypeIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long code;
@property (readonly, copy, nonatomic) NSString *schema;

+ (id)baseUserDomainConceptIdentifier;
+ (id)medicalUserDomainConceptIdentifier;
+ (id)listUserDomainConceptIdentifier;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCode:(long long)a0 schema:(id)a1;

@end
