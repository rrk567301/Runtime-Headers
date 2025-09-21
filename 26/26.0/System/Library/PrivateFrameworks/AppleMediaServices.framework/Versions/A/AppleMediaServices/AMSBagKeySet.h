@class NSMutableDictionary;

@interface AMSBagKeySet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) NSMutableDictionary *defaultValues;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMutableDictionary *defaultValues;

+ (id)defaultValueForKey:(id)a0 profile:(id)a1 profileVersion:(id)a2;
+ (void)registerBagKeySet:(id)a0 forProfile:(id)a1 profileVersion:(id)a2;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
