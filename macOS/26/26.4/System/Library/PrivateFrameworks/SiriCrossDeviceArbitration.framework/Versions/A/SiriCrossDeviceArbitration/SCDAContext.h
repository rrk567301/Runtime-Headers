@class SCDAPerceptualAudioHash, SCDAGoodnessScoreOverrideState;

@interface SCDAContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, copy, nonatomic) SCDAPerceptualAudioHash *perceptualAudioHash;
@property (readonly, copy, nonatomic) SCDAGoodnessScoreOverrideState *overrideState;
@property (readonly, nonatomic) long long activationSource;
@property (readonly, nonatomic) unsigned long long activationExpirationTime;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithTimestamp:(unsigned long long)a0 perceptualAudioHash:(id)a1 overrideState:(id)a2 activationSource:(long long)a3 activationExpirationTime:(unsigned long long)a4;

@end
