@class NSUUID;

@interface RTSourceCoreRoutineLearnedLocation : RTSourceCoreRoutine

@property (readonly, nonatomic) NSUUID *identifier;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;

@end
