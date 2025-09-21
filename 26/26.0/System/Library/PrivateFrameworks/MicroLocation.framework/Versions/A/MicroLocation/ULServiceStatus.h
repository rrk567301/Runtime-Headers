@class ULLocationType, NSArray, ULServiceDescriptor, NSUUID, NSError, ULServiceQualityInfo, ULServiceMetaInfo;

@interface ULServiceStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long serviceState;
@property (readonly, nonatomic) NSArray *serviceSuspendReasons;
@property (readonly, nonatomic) ULServiceDescriptor *serviceDescriptor;
@property (readonly, nonatomic) NSUUID *currentLocationOfInterestUuid;
@property (readonly, nonatomic) ULLocationType *currentLocationOfInterestType;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) ULServiceQualityInfo *serviceQualityInfo;
@property (readonly, nonatomic) ULServiceMetaInfo *metaInfo;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
