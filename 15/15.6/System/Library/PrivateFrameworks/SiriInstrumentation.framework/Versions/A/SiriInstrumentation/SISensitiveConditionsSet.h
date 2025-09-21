@interface SISensitiveConditionsSet : NSObject <NSCopying> {
    unsigned long long _bitmask;
}

+ (id)fromDeviceSensitivityState:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (char)isEmpty;
- (void)addCondition:(int)a0;
- (char)intersectsWith:(id)a0;
- (char)isConditionSet:(int)a0;
- (void)addDeviceSensitivityState:(int)a0;
- (id)differenceSetFrom:(id)a0;
- (id)initWithBitMask:(unsigned long long)a0;
- (id)intersectionSetWith:(id)a0;
- (char)isDeviceSensitivityStateSet:(int)a0;
- (char)isEqualToConditionsSet:(id)a0;
- (void)removeConditions:(id)a0;
- (void)removeDeviceSensitivityState:(int)a0;
- (id)unionSetWith:(id)a0;

@end
