@class NSString, IDSCapsuleParser, NSMutableSet, NSObject;
@protocol OS_nw_parameters, OS_nw_endpoint, OS_nw_connection, OS_nw_content_context;

@interface NWLinkConnection : NSObject

@property (weak, nonatomic) NWLinkConnection *parent;
@property (retain, nonatomic) NSMutableSet *children;
@property (retain, nonatomic) NSObject<OS_nw_connection> *connection;
@property (readonly, nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) char isH2Connection;
@property (readonly, nonatomic) unsigned long long connectionID;
@property (nonatomic) char hasRequiredInterface;
@property (readonly, nonatomic) unsigned int interfaceIndex;
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *localEndpoint;
@property (readonly, retain, nonatomic) NSObject<OS_nw_endpoint> *cachedH2LocalEndpoint;
@property (readonly, retain, nonatomic) NSObject<OS_nw_endpoint> *remoteEndpoint;
@property (nonatomic) char supportsNAT64;
@property (nonatomic) char peelOffNewConnection;
@property (nonatomic) unsigned long long disconnectionState;
@property (nonatomic) char ignoreCancel;
@property (nonatomic) double scheduledDisconnectTime;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long transactionID;
@property (nonatomic) unsigned int messageType;
@property (retain, nonatomic) IDSCapsuleParser *capsuleParser;
@property (nonatomic) char hasQUICStarted;
@property (nonatomic) unsigned short channelNumber;
@property (nonatomic) char isQUICPod;
@property (nonatomic) unsigned int localQUICConnectionID;
@property (retain, nonatomic) NSObject<OS_nw_parameters> *quicPodParamaters;
@property (nonatomic) unsigned long long state;
@property (readonly) char isConnected;
@property (readonly) char hasDisconnected;
@property (readonly) char hasFailed;
@property (retain, nonatomic) NSString *protocolStackDescription;
@property (retain, nonatomic) NSObject<OS_nw_content_context> *contentContext;
@property (nonatomic) char shouldTreatNextTryAsFirstTry;

- (void).cxx_destruct;
- (id)initWithBaseNWLinkConnection:(id)a0 type:(unsigned long long)a1;
- (id)initWithType:(unsigned long long)a0 interfaceIndex:(unsigned int)a1 localEndpoint:(id)a2 remoteEndpoint:(id)a3;
- (id)initWithType:(unsigned long long)a0 interfaceIndex:(unsigned int)a1 localEndpoint:(id)a2 remoteEndpoint:(id)a3 isH2Connection:(char)a4;

@end
