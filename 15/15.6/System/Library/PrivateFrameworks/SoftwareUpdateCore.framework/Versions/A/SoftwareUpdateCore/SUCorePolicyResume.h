@class NSDictionary;

@interface SUCorePolicyResume : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property long long specifiedFields;
@property (nonatomic) char skipPhase;
@property (retain, nonatomic) NSDictionary *baseResumeOptions;
@property (retain, nonatomic) NSDictionary *additionalOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (void)backToDefaultsWithSkipPhaseSet:(char)a0;
- (id)initWithSkipPhaseSet:(char)a0;

@end
