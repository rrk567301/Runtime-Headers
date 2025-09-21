@class NSDictionary;

@interface ASCMetricsActivity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) NSDictionary *defaultFields;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *fields;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFields:(id)a0;
- (id)metricsActivityByMergingFields:(id)a0 uniquingFieldsWithBlock:(id /* block */)a1;
- (id)metricsActivityByRemovingValueForKey:(id)a0;
- (id)metricsActivityWithValue:(id)a0 forKey:(id)a1;

@end
