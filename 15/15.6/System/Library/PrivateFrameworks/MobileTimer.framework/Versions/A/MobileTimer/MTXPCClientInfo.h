@class NSDate, NSString, NSXPCConnection;

@interface MTXPCClientInfo : NSObject <MTSource>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) id clientLink;
@property (retain, nonatomic) NSDate *connectedDate;
@property (readonly, nonatomic) int processID;
@property (readonly, copy, nonatomic) NSString *processName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInfoForConnection:(id)a0 clientLink:(id)a1;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)sourceIdentifier;
- (char)donatesIntent;
- (id)initWithConnection:(id)a0 clientLink:(id)a1;

@end
