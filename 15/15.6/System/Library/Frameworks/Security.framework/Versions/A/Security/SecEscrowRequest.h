@class NSString, NSXPCConnection;

@interface SecEscrowRequest : NSObject <SecEscrowRequestable>

@property (retain) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)request:(id *)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (char)cachePrerecord:(id)a0 serializedPrerecord:(id)a1 error:(id *)a2;
- (char)escrowCompletedWithinLastSeconds:(double)a0;
- (id)fetchPrerecord:(id)a0 error:(id *)a1;
- (id)fetchRequestWaitingOnPasscode:(id *)a0;
- (id)fetchStatuses:(id *)a0;
- (BOOL)pendingEscrowUpload:(id *)a0;
- (char)resetAllRequests:(id *)a0;
- (unsigned long long)storePrerecordsInEscrow:(id *)a0;
- (char)triggerEscrowUpdate:(id)a0 error:(id *)a1;
- (char)triggerEscrowUpdate:(id)a0 options:(id)a1 error:(id *)a2;

@end
