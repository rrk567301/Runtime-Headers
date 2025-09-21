@class HDSyncPredicate, HDNanoSyncStore;

@interface HDNanoSyncSession : HDSyncSession {
    unsigned long long _options;
    HDSyncPredicate *_syncPredicate;
}

@property (readonly, copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) unsigned long long messageCount;
@property (readonly, nonatomic) HDNanoSyncStore *nanoSyncStore;
@property (readonly, nonatomic, getter=isPullRequest) char pullRequest;
@property (readonly, nonatomic, getter=isRequestedByRemote) char requestedByRemote;
@property (readonly, nonatomic, getter=isLastChance) char lastChance;

- (void).cxx_destruct;
- (id)changeSetWithChanges:(id)a0 statusCode:(int)a1 error:(id)a2;
- (void)incrementMessageCount;
- (id)initWithSyncStore:(id)a0 options:(unsigned long long)a1 reason:(id)a2 delegate:(id)a3 completion:(id /* block */)a4;
- (void)invokeCompletionWithSuccess:(char)a0 error:(id)a1;
- (long long)maxEncodedBytesPerChangeSetForSyncEntityClass:(Class)a0;
- (long long)maxEncodedBytesPerCodableChangeForSyncEntityClass:(Class)a0;
- (id)newChangeWithSyncEntityClass:(Class)a0 version:(struct { int x0; int x1; })a1;
- (char)shouldOverrideCycleTrackingSymptomsForBackwardsCompatibilty;
- (id)syncPredicate;

@end
