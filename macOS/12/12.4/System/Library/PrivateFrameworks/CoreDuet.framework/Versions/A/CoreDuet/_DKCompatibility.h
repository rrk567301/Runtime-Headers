@interface _DKCompatibility : NSObject

@property (nonatomic) long long min;
@property (nonatomic) long long max;

+ (id)currentCompatibility;
+ (id)compatibilityWithMinVersion:(long long)a0 maxVersion:(long long)a1;
+ (id)compatibilityFromSerializedCompatibility:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)eventPredicate;
- (id)serialize;
- (id)filterIncompatibleEvents:(id)a0;

@end
