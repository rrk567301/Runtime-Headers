@class NSString, _RWIRelayConnectionToApplication;

@interface _RWIApplicationInfo : NSObject

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isProxy) char proxy;
@property (nonatomic) _RWIRelayConnectionToApplication *connection;
@property (copy, nonatomic) NSString *debuggerConnectionIdentifier;
@property (nonatomic) unsigned long long debuggerAvailability;
@property (readonly, nonatomic) long long automationAvailability;
@property (readonly, nonatomic) char hasRemoteDebugSession;
@property (readonly, nonatomic) char hasUpdatedFromListing;
@property (nonatomic) int hostApplicationPID;

+ (id)identifierForPID:(int)a0;

- (void).cxx_destruct;
- (id)identifier;
- (id)dictionaryRepresentation;
- (id)initWithPID:(int)a0 bundleId:(id)a1 name:(id)a2 isProxy:(char)a3 connection:(id)a4 debuggerAvailability:(unsigned long long)a5;
- (char)updateFromListing:(id)a0;

@end
