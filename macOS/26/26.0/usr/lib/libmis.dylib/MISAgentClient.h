@interface MISAgentClient : NSObject

- (id)ping:(id *)a0;
- (id)init;
- (BOOL)addMonotonicTimeOffset:(long long)a0 cdHash:(id)a1 error:(id *)a2;
- (BOOL)addRTCResetCountOffset:(long long)a0 cdHash:(id)a1 error:(id *)a2;
- (BOOL)migrateData:(int)a0 error:(id *)a1;
- (BOOL)trustProfileUUID:(id)a0 signature:(id)a1 error:(id *)a2;
- (BOOL)trustTeamID:(id)a0 signature:(id)a1 error:(id *)a2;
- (BOOL)untrustProfileUUID:(id)a0 error:(id *)a1;
- (BOOL)untrustTeamID:(id)a0 error:(id *)a1;

@end
