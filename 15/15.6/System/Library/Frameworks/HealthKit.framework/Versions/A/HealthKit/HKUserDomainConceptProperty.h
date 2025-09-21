@interface HKUserDomainConceptProperty : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=isDeleted) char deleted;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) double timestamp;

+ (id)mergeListsOfPropertiesWithType:(long long)a0 intoListOfProperties:(id)a1 fromListOfProperties:(id)a2 options:(unsigned long long)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueDescription;
- (id)initWithType:(long long)a0 version:(long long)a1 timestamp:(double)a2 deleted:(char)a3;
- (void)unitTesting_setTimestamp:(double)a0;

@end
