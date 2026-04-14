@class NSNumber, NSData;

@interface CHIPOtaSoftwareUpdateRequestorClusterAnnounceOtaProviderParams : NSObject

@property (retain, nonatomic) NSNumber *providerNodeId;
@property (retain, nonatomic) NSNumber *vendorId;
@property (retain, nonatomic) NSNumber *announcementReason;
@property (retain, nonatomic) NSData *metadataForNode;
@property (retain, nonatomic) NSNumber *endpoint;

- (id)init;
- (void).cxx_destruct;

@end
