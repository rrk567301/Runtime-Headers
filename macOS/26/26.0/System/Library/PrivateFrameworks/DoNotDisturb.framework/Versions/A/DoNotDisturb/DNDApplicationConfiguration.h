@class NSMutableSet;

@interface DNDApplicationConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long minimumBreakthroughUrgency;
@property (readonly, copy, nonatomic) NSMutableSet *allowedThreads;
@property (readonly, copy, nonatomic) NSMutableSet *deniedThreads;

+ (id)defaultConfiguration;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)diffDescription;
- (id)_initWithMinimumBreakthroughUrgency:(unsigned long long)a0 allowedThreads:(id)a1 deniedThreads:(id)a2;

@end
