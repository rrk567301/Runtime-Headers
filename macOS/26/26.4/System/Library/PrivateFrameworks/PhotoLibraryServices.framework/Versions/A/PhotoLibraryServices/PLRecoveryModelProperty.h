@class NSString, NSURL, NSManagedObjectID;

@interface PLRecoveryModelProperty : NSObject

@property (readonly) NSString *assetUUID;
@property (readonly) NSManagedObjectID *resourceObjectID;
@property (readonly) NSString *resourceFingerprint;
@property (readonly) NSString *resourceUTI;
@property (readonly) NSURL *resourceURL;
@property (readonly) unsigned int resourceType;
@property (readonly) short resourceAvailability;
@property (readonly) short resourceCloudLocalState;

- (void).cxx_destruct;
- (id)description;
- (id)initWithResource:(id)a0 fingerprint:(id)a1;

@end
