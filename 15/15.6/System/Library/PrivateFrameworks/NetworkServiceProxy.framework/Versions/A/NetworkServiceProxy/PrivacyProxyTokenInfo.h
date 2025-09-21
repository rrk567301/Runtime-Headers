@interface PrivacyProxyTokenInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long cachedTokens;
@property (nonatomic) unsigned long long agentTokens;
@property (nonatomic) unsigned long long agentLowWaterMark;
@property (nonatomic) unsigned long long cacheLowWaterMark;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
