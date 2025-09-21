@class NSArray, CLRegion, NSNumber;

@interface DNDSUntilExitRegionStore : NSObject <NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSArray *activeLifetimeAssertionUUIDs;
@property (readonly, copy, nonatomic) CLRegion *currentRegion;
@property (readonly, copy, nonatomic) NSNumber *regionEntered;
@property (readonly, copy, nonatomic) NSNumber *hasActiveLifetimes;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithStore:(id)a0;
- (id)_initWithActiveLifetimeAssertionUUIDs:(id)a0 currentRegion:(id)a1 regionEntered:(id)a2;
- (id)dictionaryRepresentationWithContext:(id)a0;

@end
