@class NSString, EAEmailAddressSet;

@interface EMVIP : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) EAEmailAddressSet *emailAddresses;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 emailAddresses:(id)a2;
- (void)_commonInitWithIdentifier:(id)a0 name:(id)a1 emailAddresses:(id)a2 displayName:(id)a3;
- (char)_isEqualToVIP:(id)a0;

@end
