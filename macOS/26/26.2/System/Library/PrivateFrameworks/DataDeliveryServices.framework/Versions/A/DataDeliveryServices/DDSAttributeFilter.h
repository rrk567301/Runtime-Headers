@class NSMutableDictionary;

@interface DDSAttributeFilter : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *filters;

+ (unsigned long long)hashObject:(id)a0;
+ (id)attributeFilter;
+ (unsigned long long)hashDictionary:(id)a0;
+ (id)attributeFilterWithDictionary:(id)a0;
+ (unsigned long long)hashSet:(id)a0;

- (id)initWithCoder:(id)a0;
- (void)removeAllowedValue:(id)a0 forKey:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)enumerateAllowedValuesAndKeys:(id /* block */)a0;
- (void)addEntriesFromFilter:(id)a0;
- (id)entriesMatchingAttributes:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dumpDescription;
- (id)_setForKey:(id)a0;
- (id)allowedValuesForKey:(id)a0;
- (void).cxx_destruct;
- (void)addAllowedValues:(id)a0 forKey:(id)a1;
- (BOOL)doesContainAttributes:(id)a0;
- (id)description;
- (BOOL)isEqualToQueryFilter:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)removeAllowedValues:(id)a0 forKey:(id)a1;
- (id)init;
- (void)addAllowedValue:(id)a0 forKey:(id)a1;

@end
