@class NSNumber;

@interface DNDSMutableConfigurationRecord : DNDSConfigurationRecord

@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSNumber *suppressionType;
@property (copy, nonatomic) NSNumber *minimumBreakthroughUrgency;
@property (copy, nonatomic) NSNumber *hideApplicationBadges;
@property (copy, nonatomic) NSNumber *compatibilityVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setType:(id)a0;
- (void)setCompatibilityVersion:(id)a0;
- (void)setMinimumBreakthroughUrgency:(id)a0;
- (void)setSuppressionType:(id)a0;
- (void)setHideApplicationBadges:(id)a0;

@end
