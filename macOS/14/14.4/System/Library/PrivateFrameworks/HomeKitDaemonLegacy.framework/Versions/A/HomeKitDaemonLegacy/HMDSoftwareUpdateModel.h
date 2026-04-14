@class HMSoftwareUpdateDocumentationMetadata, NSString, NSDate, HMFSoftwareVersion, NSNumber;

@interface HMDSoftwareUpdateModel : HMDBackingStoreModelObject

@property (copy, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (copy, nonatomic) NSString *displayableSoftwareVersion;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *downloadSize;
@property (copy, nonatomic) NSNumber *installDuration;
@property (copy, nonatomic) HMSoftwareUpdateDocumentationMetadata *documentationMetadata;
@property (copy, nonatomic) NSDate *releaseDate;

+ (id)properties;

@end
