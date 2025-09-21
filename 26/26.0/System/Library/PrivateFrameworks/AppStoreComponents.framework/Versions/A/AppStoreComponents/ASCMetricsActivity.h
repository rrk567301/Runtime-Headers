@class NSDictionary;

@interface ASCMetricsActivity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) NSDictionary *defaultFields;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *fields;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFields:(id)a0;
- (id)metricsActivityByMergingFields:(id)a0 uniquingFieldsWithBlock:(id /* block */)a1;
- (id)metricsActivityByRemovingValueForKey:(id)a0;
- (id)metricsActivityWithValue:(id)a0 forKey:(id)a1;

@end
