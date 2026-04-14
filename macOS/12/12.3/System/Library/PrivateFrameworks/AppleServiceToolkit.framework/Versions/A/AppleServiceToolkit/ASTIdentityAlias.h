@class NSDictionary;

@interface ASTIdentityAlias : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *dictionary;

+ (id)identityAliasWithChipId:(id)a0 uniqueChipId:(id)a1;
+ (id)identityAliasWithSerialNumber:(id)a0;
+ (id)identityAliasWithMainLogicBoardSerialNumber:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithChipId:(id)a0 uniqueChipId:(id)a1;
- (id)initWithSerialNumber:(id)a0;
- (id)initWithMainLogicBoardSerialNumber:(id)a0;

@end
