@class NSDate;

@interface TRIAllocationStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) NSDate *date;

+ (id)sampleAllocationStatuses:(id)a0 correlationId:(id)a1 nrSamples:(unsigned int)a2;
+ (id)getDateFromCursor:(id)a0;
+ (id)activeExperimentInformationWithEnvironments:(id)a0 error:(id *)a1;
+ (id)notificationNameForDeploymentEnvironment:(int)a0;
+ (id)internalToExternalStatusMapping;
+ (id)categoricalValueForRolloutAllocationStatus:(unsigned char)a0;
+ (id)defaultProvider;
+ (void)resetDefaultProvider;
+ (id)_defaultProviderImpl;
+ (id)syncProxyWithErrorHandler:(id /* block */)a0;
+ (id)categoricalValueForExperimentAllocationStatus:(unsigned char)a0;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToStatus:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned char)a0 date:(id)a1;

@end
