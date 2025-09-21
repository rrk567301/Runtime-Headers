@class NSString, NSDictionary;

@interface PKDiscoveryEngagementMessageAction : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *titleKey;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSDictionary *actionInfo;
@property (readonly, nonatomic) NSString *localizedTitle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)localizeWithBundle:(id)a0;

@end
