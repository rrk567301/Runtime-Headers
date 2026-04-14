@class NSNumber, NSData;

@interface CHIPOtaSoftwareUpdateRequestorClusterAnnounceOtaProviderParams : NSObject

@property (retain, nonatomic) NSNumber *providerLocation;
@property (retain, nonatomic) NSNumber *vendorId;
@property (retain, nonatomic) NSNumber *announcementReason;
@property (retain, nonatomic) NSData *metadataForNode;

- (id)init;
- (void).cxx_destruct;

@end
