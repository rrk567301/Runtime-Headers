@class NSSet, MROutputDeviceConfiguration, MRRequestDetails;

@interface MROutputDeviceModificationRequest : NSObject

@property (readonly, nonatomic) MRRequestDetails *requestDetails;
@property (readonly, nonatomic) MROutputDeviceConfiguration *configuration;
@property (readonly, nonatomic) NSSet *outputDevices;
@property (readonly, nonatomic) unsigned long long type;

+ (id)pendingSelectionforModifications:(id)a0 currentSelection:(id)a1;

- (void).cxx_destruct;
- (unsigned long long)requestType;
- (id)groupTopologyModificationRequest;
- (id)initWithRequestDetails:(id)a0 configuration:(id)a1 type:(unsigned long long)a2 outputDevice:(id)a3;
- (id)initWithRequestDetails:(id)a0 configuration:(id)a1 type:(unsigned long long)a2 outputDevices:(id)a3;

@end
