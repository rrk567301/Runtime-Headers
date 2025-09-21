@class NSString, CORapportBrowser, NSUUID;
@protocol COCompanionLinkClientProtocol;

@interface CORapportCurrentDevice : NSObject <CODiscoveryRecordProtocol, CORapportTransportCompatibleProcotol>

@property (readonly, weak, nonatomic) CORapportBrowser *browser;
@property (readonly, nonatomic) id<COCompanionLinkClientProtocol> client;
@property (readonly, copy, nonatomic) NSString *IDSIdentifier;
@property (readonly, nonatomic) NSUUID *HomeKitIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ companionLinkProvider;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)requiresInquiry;
- (char)hasSameBackingDeviceAs:(id)a0;
- (id)initWithClient:(id)a0 browser:(id)a1;
- (id)newTransportWithExecutionContext:(id)a0;
- (char)producesElectionCapableTransport;

@end
