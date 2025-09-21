@class NSString, NSArray;

@interface ASTIdentity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSArray *aliases;
@property (retain, nonatomic) NSArray *json;
@property (retain, nonatomic) NSString *hostAppVersion;
@property (retain, nonatomic) NSString *hostAppBuild;

+ (id)identityWithIdentityAliases:(id)a0;
+ (id)identityWithSerialNumber:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)userAgent;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_dictionariesFromIdentityAliases:(id)a0;
- (id)initWithIdentityAliases:(id)a0;

@end
