@class NSNumber, NSString, NSError, HMFSoftwareVersion, HMSoftwareUpdateDocumentationMetadata;

@interface HMSoftwareUpdateDescriptor : HMFObject

@property long long status;
@property (readonly) NSError *error;
@property (readonly) HMSoftwareUpdateDocumentationMetadata *documentationMetadata;
@property (readonly) HMFSoftwareVersion *version;
@property (readonly) NSNumber *downloadSize;
@property (readonly, copy) NSString *humanReadableUpdateName;
@property (retain) NSNumber *rampFeatureEnabledOnServer;

+ (id)shortDescription;
+ (id)descriptorFromEvent:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)privateDescription;
- (id)attributeDescriptions;
- (id)initWithProtoPayload:(id)a0;
- (id)initWithStatus:(long long)a0 downloadSize:(id)a1 humanReadableUpdateName:(id)a2 rampEnabled:(id)a3 errorCode:(id)a4 serverAssetURL:(id)a5 serverAssetAlgorithm:(id)a6 serverAssetMeasurement:(id)a7 majorVersion:(id)a8 minorVersion:(id)a9 updateVersion:(id)a10 buildVersion:(id)a11 softwareVersionRequiresMetadata:(char)a12;
- (id)initWithStatus:(long long)a0 error:(id)a1 documentationMetadata:(id)a2 version:(id)a3 downloadSize:(id)a4 humanReadableUpdateName:(id)a5 rampFeatureEnabledOnServer:(id)a6;
- (id)protoPayload;

@end
