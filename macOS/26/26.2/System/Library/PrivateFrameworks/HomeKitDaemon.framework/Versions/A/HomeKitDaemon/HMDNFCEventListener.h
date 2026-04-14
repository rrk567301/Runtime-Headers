@class NSString, HMDNFCEventStream;

@interface HMDNFCEventListener : HMFObject <HMDNFCEventStreamDelegate, HMFLogging>

@property (retain) HMDNFCEventStream *fieldEventStream;
@property (retain) HMDNFCEventStream *proxyCardEventStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
