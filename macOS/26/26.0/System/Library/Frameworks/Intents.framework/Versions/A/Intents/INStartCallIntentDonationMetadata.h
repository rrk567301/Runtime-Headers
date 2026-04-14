@class NSNumber;

@interface INStartCallIntentDonationMetadata : INIntentDonationMetadata

@property double callDuration;
@property double timeToEstablish;
@property (copy) NSNumber *recentCallStatus;
@property (copy) NSNumber *disconnectedReason;

+ (BOOL)supportsSecureCoding;
+ (Class)_intentClass;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
