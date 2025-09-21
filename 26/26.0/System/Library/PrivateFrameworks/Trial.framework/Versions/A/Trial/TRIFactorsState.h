@class TRIFactorsStateExperimentIdentifiers;

@interface TRIFactorsState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIFactorsStateExperimentIdentifiers *experimentIdentifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)persisted;
- (id)initWithPersisted:(id)a0;

@end
