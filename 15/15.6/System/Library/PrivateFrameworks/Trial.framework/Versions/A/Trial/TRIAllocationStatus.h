@class NSDate;

@interface TRIAllocationStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) NSDate *date;

+ (id)defaultProvider;
+ (id)syncProxyWithErrorHandler:(id /* block */)a0;
+ (id)internalToExternalStatusMapping;
+ (id)activeBMLTInformationWithError:(id *)a0;
+ (id)_defaultProvider;
+ (id)activeExperimentInformationWithEnvironments:(id)a0 error:(id *)a1;
+ (id)categoricalValueForExperimentAllocationStatus:(unsigned char)a0;
+ (id)categoricalValueForRolloutAllocationStatus:(unsigned char)a0;
+ (id)getDateFromCursor:(id)a0;
+ (id)notificationNameForDeploymentEnvironment:(int)a0;
+ (void)resetDefaultProvider;
+ (id)sampleAllocationStatuses:(id)a0 correlationId:(id)a1 nrSamples:(unsigned int)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(unsigned char)a0 date:(id)a1;
- (char)isEqualToStatus:(id)a0;

@end
