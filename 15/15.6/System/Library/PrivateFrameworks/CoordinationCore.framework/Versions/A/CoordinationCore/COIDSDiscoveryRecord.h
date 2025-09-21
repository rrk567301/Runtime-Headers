@class COIDSServiceDirector, NSString, COOnDemandIDSNodeCreationRequest, NSUUID;

@interface COIDSDiscoveryRecord : NSObject <CODiscoveryRecordProtocol, COIDSTransportCompatibleProcotol>

@property (copy, nonatomic) COIDSServiceDirector *serviceDirector;
@property (readonly, copy, nonatomic) NSString *deviceTokenURI;
@property (retain, nonatomic) COOnDemandIDSNodeCreationRequest *onDemandRequest;
@property (readonly, copy, nonatomic) NSString *IDSIdentifier;
@property (readonly, nonatomic) NSUUID *HomeKitIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)requiresInquiry;
- (char)hasSameBackingDeviceAs:(id)a0;
- (id)initWithIdsIdentifier:(id)a0 deviceTokenURI:(id)a1;
- (id)newTransportWithExecutionContext:(id)a0;
- (char)producesElectionCapableTransport;

@end
