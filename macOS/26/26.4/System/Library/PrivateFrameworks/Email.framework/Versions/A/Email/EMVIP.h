@class NSString, EAEmailAddressSet;

@interface EMVIP : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) EAEmailAddressSet *emailAddresses;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 emailAddresses:(id)a2;
- (void)_commonInitWithIdentifier:(id)a0 name:(id)a1 emailAddresses:(id)a2 displayName:(id)a3;
- (BOOL)_isEqualToVIP:(id)a0;

@end
