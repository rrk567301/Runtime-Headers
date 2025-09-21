@class NSArray, NSMutableSet, NSString;

@interface _GCIPCRemoteProcess : NSObject <_GCIPCProcess>

@property (copy) NSArray *connections;
@property (retain, nonatomic) NSMutableSet *connectionInvalidationRegistrations;
@property (readonly) struct { unsigned int val[8]; } auditToken;
@property (readonly) int auditSessionIdentifier;
@property (readonly) int processIdentifier;
@property (readonly) unsigned int effectiveUserIdentifier;
@property (readonly) unsigned int effectiveGroupIdentifier;
@property (readonly) NSString *bundleIdentifier;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (id)redactedDescription;
- (void)addConnection:(id)a0;
- (char)isEqualToProcess:(id)a0;
- (void)populateBundleIdentifierForConnection:(id)a0;

@end
