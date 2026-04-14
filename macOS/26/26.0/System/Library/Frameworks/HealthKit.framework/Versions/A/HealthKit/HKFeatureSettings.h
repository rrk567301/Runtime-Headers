@class NSDictionary;

@interface HKFeatureSettings : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_modificationDatesByKey;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *keyValueStorage;

- (id)stringForKey:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)allKeys;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dataForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)numberForKey:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)dateForKey:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)numberForKey:(id)a0 error:(id *)a1;
- (id)initWithDictionary:(id)a0 modificationDatesByKey:(id)a1;
- (id)modificationDateForKey:(id)a0;

@end
