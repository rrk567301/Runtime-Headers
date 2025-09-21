@class NSString;

@interface ABACAccountType : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *identifier;

+ (id)ABACAccountTypeFromACAccountType:(id)a0;
+ (id)accountTypeMap;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)addressBookAccountType;

@end
