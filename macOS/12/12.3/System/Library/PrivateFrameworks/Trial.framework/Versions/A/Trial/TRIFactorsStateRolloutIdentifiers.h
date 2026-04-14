@class NSString;

@interface TRIFactorsStateRolloutIdentifiers : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *rolloutId;
@property (readonly, nonatomic) int deploymentId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithRolloutId:(id)a0 deploymentId:(int)a1;
- (BOOL)isEqualToIdentifiers:(id)a0;

@end
