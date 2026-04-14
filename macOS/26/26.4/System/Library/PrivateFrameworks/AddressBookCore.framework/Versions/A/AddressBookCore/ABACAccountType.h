@class NSString;

@interface ABACAccountType : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *identifier;

+ (id)ABACAccountTypeFromACAccountType:(id)a0;
+ (id)accountTypeMap;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)addressBookAccountType;

@end
