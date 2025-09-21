@class TRIFactorsStateRolloutIdentifiers, TRIFactorsStateBMLTIdentifiers, TRIFactorsStateExperimentIdentifiers;

@interface TRIFactorsState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) TRIFactorsStateExperimentIdentifiers *experimentIdentifiers;
@property (readonly, nonatomic) TRIFactorsStateRolloutIdentifiers *rolloutIdentifiers;
@property (readonly, nonatomic) TRIFactorsStateBMLTIdentifiers *bmltIdentifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)persisted;
- (id)initWithPersisted:(id)a0;

@end
