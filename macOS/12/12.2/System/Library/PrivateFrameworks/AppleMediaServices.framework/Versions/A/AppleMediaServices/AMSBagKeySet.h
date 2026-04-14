@class NSSet, NSMutableDictionary;

@interface AMSBagKeySet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) NSMutableDictionary *bagKeySetCache;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSSet *keys;
@property (readonly) unsigned long long count;

+ (void)registerBagKeySet:(id)a0 forProfile:(id)a1 profileVersion:(id)a2;
+ (id)registeredBagKeySetForProfile:(id)a0 profileVersion:(id)a1;
+ (void)resetRegisteredBagKeySets;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasKey:(id)a0;
- (id)bagKeyInfoForKey:(id)a0;

@end
