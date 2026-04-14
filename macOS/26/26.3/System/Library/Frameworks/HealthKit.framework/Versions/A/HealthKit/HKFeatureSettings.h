@class NSDictionary;

@interface HKFeatureSettings : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_modificationDatesByKey;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *keyValueStorage;

- (id)dataForKey:(id)a0;
- (id)allKeys;
- (id)stringForKey:(id)a0;
- (id)numberForKey:(id)a0;
- (id)description;
- (id)dateForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)numberForKey:(id)a0 error:(id *)a1;
- (id)initWithDictionary:(id)a0 modificationDatesByKey:(id)a1;
- (id)modificationDateForKey:(id)a0;

@end
