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

- (void)addConnection:(id)a0;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToProcess:(id)a0;
- (void)populateBundleIdentifierForConnection:(id)a0;

@end
