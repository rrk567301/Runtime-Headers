@class NSNumber, NSData;

@interface MTROtaSoftwareUpdateRequestorClusterAnnounceOtaProviderParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *providerNodeId;
@property (copy, nonatomic) NSNumber *vendorId;
@property (copy, nonatomic) NSNumber *announcementReason;
@property (copy, nonatomic) NSData *metadataForNode;
@property (copy, nonatomic) NSNumber *endpoint;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
