@interface DNDSModeDetails : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long interruptionSuppression;

+ (id)detailsForInactiveDoNotDisturb;

- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithInterruptionSuppression:(unsigned long long)a0;
- (id)restrictedDetailsWithDetails:(id)a0;

@end
