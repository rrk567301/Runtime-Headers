@interface HKDataCollectorCollectionConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double collectionInterval;
@property (nonatomic) double collectionLatency;
@property (nonatomic) unsigned long long collectionType;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithCollectionInterval:(double)a0 collectionLatency:(double)a1 collectionType:(unsigned long long)a2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
