@class NSString, NSXPCConnection;
@protocol CalendarAgentClient;

@interface CalXPCClientInfo : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) id<CalendarAgentClient> clientLink;
@property (nonatomic) int processID;
@property (copy, nonatomic) NSString *processName;

+ (id)clientInfoForConnection:(id)a0 clientLink:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 clientLink:(id)a1;
- (BOOL)_isEqualToCalXPCClientInfo:(id)a0;

@end
