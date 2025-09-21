@class NSString, AFAccount, NSNumber;

@interface SRUIFSiriSessionInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *assistantVersion;
@property (copy, nonatomic) AFAccount *activeAccount;
@property (copy, nonatomic) NSNumber *userAccountCount;
@property (readonly, copy, nonatomic) NSString *identifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)a0;
- (id)_setPropertyValue:(id)a0 withSelector:(SEL)a1;
- (id)_strippedInfo;
- (BOOL)applyInfo:(id)a0;
- (id)setActiveAccountAndGenerateLightweightInfo:(id)a0;
- (id)setAssistantVersionAndGenerateLightweightInfo:(id)a0;
- (id)setUserAccountCountGenerateLightweightInfo:(long long)a0;

@end
