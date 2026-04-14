@class NSString;

@interface ABACAccountType : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *identifier;

+ (id)ABACAccountTypeFromACAccountType:(id)a0;
+ (id)accountTypeMap;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)addressBookAccountType;

@end
