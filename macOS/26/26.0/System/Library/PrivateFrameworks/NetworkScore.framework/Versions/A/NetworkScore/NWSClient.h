@interface NWSClient : NWSClientConnection

- (void)getAlgosScoreByUUID:(id)a0 completion:(id /* block */)a1;
- (void)getNWActivityByUUID:(id)a0 completion:(id /* block */)a1;
- (void)deleteAllNWActivities:(id /* block */)a0;
- (void)deleteAllNWActivitiesForDomain:(int)a0 start:(id)a1 end:(id)a2 completion:(id /* block */)a3;
- (void)deleteAllScores:(id /* block */)a0;
- (void)deleteAllScoresForBundleID:(id)a0 start:(id)a1 end:(id)a2 completion:(id /* block */)a3;
- (void)getAllScoresForBundleID:(id)a0 start:(id)a1 end:(id)a2 completion:(id /* block */)a3;
- (void)getAllScoresForBundleIDAndType:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void)getCountofNWActivityObjectForDomain:(int)a0 completion:(id /* block */)a1;
- (void)getCountofNWActivityObjects:(id /* block */)a0;
- (void)getCountofNWActivityObjectsForDomainAndLabel:(int)a0 label:(int)a1 completion:(id /* block */)a2;
- (void)getCountofScoreObjects:(id /* block */)a0;
- (void)getCountofScoreObjectsByType:(long long)a0 :(id /* block */)a1;
- (void)getCountofScoreObjectsForBundleID:(id)a0 completion:(id /* block */)a1;
- (void)getCountofScoreObjectsPerBundleID:(id /* block */)a0;
- (void)getMostRecentScores:(id /* block */)a0;
- (void)getNWActivityByDomain:(int)a0 completion:(id /* block */)a1;
- (void)getNWActivityByDomainAndLabel:(int)a0 label:(int)a1 completion:(id /* block */)a2;
- (id)prepareRemoteConnection;

@end
