@class NSString;

@interface TRIRolloutIdentifiers : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *rolloutId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString *factorPackId;
@property (readonly, nonatomic) NSString *rampId;

- (id)initWithRolloutId:(id)a0 deploymentId:(int)a1 factorPackId:(id)a2 rampId:(id)a3;
- (id)initWithRolloutId:(id)a0 deploymentId:(int)a1 factorPackId:(id)a2;
- (id)description;
- (BOOL)isEqualToRolloutIdentifiers:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
