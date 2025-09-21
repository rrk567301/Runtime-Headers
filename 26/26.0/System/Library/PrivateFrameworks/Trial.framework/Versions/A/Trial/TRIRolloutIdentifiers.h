@class NSString;

@interface TRIRolloutIdentifiers : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *rolloutId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString *factorPackId;
@property (readonly, nonatomic) NSString *rampId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRolloutId:(id)a0 deploymentId:(int)a1 factorPackId:(id)a2 rampId:(id)a3;
- (id)initWithRolloutId:(id)a0 deploymentId:(int)a1 factorPackId:(id)a2;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToRolloutIdentifiers:(id)a0;
- (void).cxx_destruct;

@end
