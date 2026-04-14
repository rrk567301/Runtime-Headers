@class NSString, br_pacer;

@interface BRCPQLConnection : PQLConnection {
    br_pacer *_batchingPacer;
    int _changeCount;
    double _flushInterval;
    BOOL _flushImmediately;
    BOOL _autovacuumInProgress;
    long long _changesOverride;
}

@property (nonatomic) BOOL verboseProfilingEnabled;
@property (nonatomic) BOOL profilingEnabled;
@property (readonly, nonatomic) unsigned long long vmStepsExecuted;
@property (copy, nonatomic) id /* block */ lockedHandler;
@property (readonly, nonatomic) BOOL isReadonly;
@property (retain, nonatomic) NSString *assertionPersonaIdentifier;

- (void)setProfilingHook:(id /* block */)a0;
- (id)fetch:(id)a0 args:(char *)a1;
- (long long)changes;
- (id)fetchWithExpectedIndex:(id)a0 sql:(id)a1;
- (BOOL)_validateIsRunningWithCorrectPersona;
- (BOOL)needsAutovacuum;
- (void)scheduleFlushWithCheckpoint:(BOOL)a0 whenFlushed:(id /* block */)a1;
- (BOOL)_registerStaticDBFunctionsWithError:(id *)a0;
- (BOOL)execute:(id)a0;
- (id)fetchObjectOfClass:(Class)a0 sql:(id)a1;
- (void)flushToMakeEditsVisibleToIPCReaders;
- (void)autovacuumIfNeeded;
- (id)initWithLabel:(id)a0 dbCorruptionHandler:(id /* block */)a1;
- (id)fetchWithSlowStatementRadar:(id)a0 objectWithConstructor:(id /* block */)a1 sql:(id)a2;
- (void)brc_close;
- (id)fetchWithSlowStatementRadar:(id)a0 sql:(id)a1;
- (BOOL)_shouldFlushWithChangeCount:(int)a0;
- (id)fetchObjectOfClass:(Class)a0 initializer:(SEL)a1 sql:(id)a2 args:(char *)a3;
- (BOOL)executeWithSlowStatementRadar:(id)a0 sql:(id)a1;
- (void).cxx_destruct;
- (BOOL)brc_closeWithError:(id *)a0;
- (void)disableProfilingForQueriesInBlock:(id /* block */)a0;
- (BOOL)executeWithErrorHandler:(id /* block */)a0 sql:(id)a1;
- (void)_setLockedHandler;
- (long long)sizeInBytes;
- (id)fetchObject:(id /* block */)a0 sql:(id)a1;
- (BOOL)executeWithExpectedIndex:(id)a0 sql:(id)a1;
- (void)usePacedBatchingOnTargetQueue:(id)a0 withInterval:(double)a1 changeCount:(int)a2;
- (BOOL)openAtURL:(id)a0 withFlags:(int)a1 error:(id *)a2;
- (BOOL)execute:(id)a0 args:(char *)a1;
- (id)fetchWithSlowStatementRadar:(id)a0 objectOfClass:(Class)a1 sql:(id)a2;
- (BOOL)executeRaw:(id)a0;
- (id)fetchObject:(id /* block */)a0 sql:(id)a1 args:(char *)a2;
- (id)init;
- (id)fetchObjectOfClass:(Class)a0 sql:(id)a1 args:(char *)a2;
- (BOOL)attachDBAtPath:(id)a0 as:(id)a1 error:(id *)a2;
- (void)assertOnQueue;
- (void)_setErrorHandlerWithDBCorruptionHandler:(id /* block */)a0;
- (id)fetch:(id)a0;
- (id)fetchObjectOfClass:(Class)a0 initializer:(SEL)a1 sql:(id)a2;

@end
