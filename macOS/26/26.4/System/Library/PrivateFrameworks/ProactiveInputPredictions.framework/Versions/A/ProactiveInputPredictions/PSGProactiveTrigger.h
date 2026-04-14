@class NSString, NSDictionary;

@interface PSGProactiveTrigger : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long triggerSourceType;
@property (readonly, nonatomic) NSString *triggerCategory;
@property (readonly, nonatomic) NSDictionary *triggerAttributes;

+ (id)getGivenNameQualifier:(id)a0;
+ (id)getSearchTerm:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithSourceType:(unsigned long long)a0 category:(id)a1 attributes:(id)a2;
- (BOOL)isEqualToTrigger:(id)a0;

@end
