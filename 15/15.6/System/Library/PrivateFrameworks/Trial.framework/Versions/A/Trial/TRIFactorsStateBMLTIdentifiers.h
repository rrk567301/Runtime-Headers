@class NSString;

@interface TRIFactorsStateBMLTIdentifiers : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *bmltId;
@property (readonly, nonatomic) int deploymentId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBMLTId:(id)a0 deploymentId:(int)a1;
- (char)isEqualToIdentifiers:(id)a0;

@end
