@interface HKDataCollectorCollectionConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double collectionInterval;
@property (nonatomic) double collectionLatency;
@property (nonatomic) unsigned long long collectionType;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCollectionInterval:(double)a0 collectionLatency:(double)a1 collectionType:(unsigned long long)a2;

@end
