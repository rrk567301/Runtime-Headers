@class NSString;

@interface CHSWidgetRelevanceGroupAttribute : CHSWidgetRelevanceAttribute

@property (class, readonly, nonatomic) CHSWidgetRelevanceGroupAttribute *ungrouped;

@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) unsigned long long groupType;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithNamedGroupIdentifier:(id)a0;
- (id)initWithNamedGroupIdentifier:(id)a0 groupType:(unsigned long long)a1;

@end
