@class NSString, NSUUID, NSObject;
@protocol OS_nw_connection;

@interface IDSNWConnectionInfo : NSObject

@property (nonatomic) unsigned long long connectionID;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) char isValid;
@property (nonatomic) char isQUICPod;
@property (nonatomic) char isRelay;
@property (nonatomic) char isCellular;
@property (nonatomic) unsigned long long clientUniquePID;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSUUID *childConnectionID;
@property (retain, nonatomic) NSString *protocolStackDescription;
@property (retain, nonatomic) NSObject<OS_nw_connection> *connection;

- (void).cxx_destruct;

@end
