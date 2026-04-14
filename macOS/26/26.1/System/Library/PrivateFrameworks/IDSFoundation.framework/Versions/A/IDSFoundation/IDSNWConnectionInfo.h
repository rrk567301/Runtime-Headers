@class IDSNWQPodParameters, NSString, NSUUID, NSObject;
@protocol OS_nw_connection, OS_nw_endpoint;

@interface IDSNWConnectionInfo : NSObject

@property (nonatomic) unsigned long long connectionID;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL isQUICPod;
@property (nonatomic) BOOL isRelay;
@property (nonatomic) BOOL isCellular;
@property (nonatomic) unsigned long long clientUniquePID;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSUUID *childConnectionID;
@property (retain, nonatomic) NSString *protocolStackDescription;
@property (retain, nonatomic) NSObject<OS_nw_connection> *connection;
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *localEndpoint;
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *remoteEndpoint;
@property (retain, nonatomic) IDSNWQPodParameters *qpodParameters;
@property (readonly) const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *localAddress;
@property (readonly) const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *remoteAddress;

- (void).cxx_destruct;

@end
