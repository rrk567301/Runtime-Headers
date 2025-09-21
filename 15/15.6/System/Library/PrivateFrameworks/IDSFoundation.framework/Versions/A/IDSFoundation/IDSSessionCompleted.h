@class NSString, NSNumber, NSDictionary;

@interface IDSSessionCompleted : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSNumber *protocolVersionNumber;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) unsigned int clientType;
@property (readonly, nonatomic) char isQREnabled;
@property (readonly, nonatomic) char isUsingQRDirectly;
@property (readonly, nonatomic) char isInitiator;
@property (readonly, nonatomic) char isScreenSharingSessionType;
@property (readonly, nonatomic) char isWithDefaultPairedDevice;
@property (readonly, nonatomic) unsigned int transportType;
@property (readonly, nonatomic) unsigned int linkType;
@property (readonly, nonatomic) unsigned int linkProtocol;
@property (readonly, nonatomic) unsigned int endedReason;
@property (readonly, nonatomic) unsigned int destinationType;
@property (readonly, nonatomic) NSNumber *durationOfSession;
@property (readonly, nonatomic) NSNumber *durationToConnect;
@property (readonly, nonatomic) char isWifiInterfaceDisallowed;
@property (readonly, nonatomic) char isCellularInterfaceDisallowed;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithGuid:(id)a0 protocolVersionNumber:(id)a1 serviceName:(id)a2 clientType:(unsigned int)a3 isQREnabled:(char)a4 isUsingQRDirectly:(char)a5 isInitiator:(char)a6 isScreenSharingSessionType:(char)a7 isWithDefaultPairedDevice:(char)a8 transportType:(unsigned int)a9 linkType:(unsigned int)a10 linkProtocol:(unsigned int)a11 endedReason:(unsigned int)a12 destinationType:(unsigned int)a13 durationOfSession:(id)a14 durationToConnect:(id)a15 isWifiInterfaceDisallowed:(char)a16 isCellularInterfaceDisallowed:(char)a17;

@end
