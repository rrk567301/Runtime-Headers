@class NSUUID, NSString, HKContributor, NSDate, HKDevice, NSDictionary, HKSource, HKSourceRevision, HDDataOriginProvenance;

@interface HKObject : NSObject <HKUUIDProvider, NSCopying, NSSecureCoding> {
    NSUUID *_UUID;
    NSDictionary *_metadata;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HDDataOriginProvenance *healthd_use_only_dataOriginProvenance;
@property (copy, nonatomic, getter=_sourceBundleIdentifier, setter=_setSourceBundleIdentifier:) NSString *sourceBundleIdentifier;
@property (copy, nonatomic, getter=_creationDate, setter=_setCreationDate:) NSDate *creationDate;
@property (nonatomic, getter=_creationTimestamp, setter=_setCreationTimestamp:) double creationTimestamp;
@property (readonly, copy, nonatomic, getter=_timeZoneName) NSString *timeZoneName;
@property (readonly, nonatomic) HKContributor *contributor;
@property (readonly, nonatomic) NSString *attachmentObjectIdentifier;
@property (readonly, nonatomic) NSString *attachmentSchemaIdentifier;
@property (readonly) NSUUID *UUID;
@property (readonly) HKSource *source;
@property (readonly) HKSourceRevision *sourceRevision;
@property (readonly) HKDevice *device;
@property (readonly, copy) NSDictionary *metadata;

+ (char)_isConcreteObjectClass;
+ (id)_newDataObjectWithMetadata:(id)a0 device:(id)a1 config:(id /* block */)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (void)_setUUID:(id)a0;
- (id)_validateConfiguration;
- (void)_setMetadata:(id)a0;
- (id)asJSONObject;
- (void)_setDevice:(id)a0;
- (id)_source;
- (id)hk_UUID;
- (long long)hk_integerValue;
- (id)_copyByArchiving;
- (long long)_externalSyncObjectCode;
- (void)_setContributor:(id)a0;
- (void)_setSourceRevision:(id)a0;
- (char)_shouldNotifyOnInsert;
- (id)_validateConfigurationAllowingPrivateMetadata:(char)a0 applicationSDKVersionToken:(unsigned long long)a1;
- (void)_validateForCreation;
- (char)_validateForSavingWithClientEntitlements:(id)a0 applicationSDKVersionToken:(unsigned long long)a1 isAppleWatch:(char)a2 error:(id *)a3;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned long long x1; })a0;
- (id)_valueDescription;
- (char)prepareForDelivery:(id *)a0;
- (char)prepareForSaving:(id *)a0;

@end
