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

- (long long)changes;
- (id)fetchWithSlowStatementRadar:(id)a0 sql:(id)a1;
- (void)_setErrorHandlerWithDBCorruptionHandler:(id /* block */)a0;
- (void)assertOnQueue;
- (id)fetchObjectOfClass:(Class)a0 initializer:(SEL)a1 sql:(id)a2 args:(char *)a3;
- (BOOL)execute:(id)a0;
- (BOOL)brc_closeWithError:(id *)a0;
- (void)scheduleFlushWithCheckpoint:(BOOL)a0 whenFlushed:(id /* block */)a1;
- (id)fetchObject:(id /* block */)a0 sql:(id)a1 args:(char *)a2;
- (id)fetchObjectOfClass:(Class)a0 sql:(id)a1 args:(char *)a2;
- (BOOL)_shouldFlushWithChangeCount:(int)a0;
- (long long)sizeInBytes;
- (id)init;
- (id)fetchObjectOfClass:(Class)a0 initializer:(SEL)a1 sql:(id)a2;
- (void)usePacedBatchingOnTargetQueue:(id)a0 withInterval:(double)a1 changeCount:(int)a2;
- (id)fetchWithExpectedIndex:(id)a0 sql:(id)a1;
- (id)fetchObject:(id /* block */)a0 sql:(id)a1;
- (id)fetchWithSlowStatementRadar:(id)a0 objectWithConstructor:(id /* block */)a1 sql:(id)a2;
- (BOOL)openAtURL:(id)a0 withFlags:(int)a1 error:(id *)a2;
- (void)setProfilingHook:(id /* block */)a0;
- (void)autovacuumIfNeeded;
- (BOOL)executeRaw:(id)a0;
- (BOOL)_validateIsRunningWithCorrectPersona;
- (void)_setLockedHandler;
- (void).cxx_destruct;
- (BOOL)executeWithErrorHandler:(id /* block */)a0 sql:(id)a1;
- (id)fetch:(id)a0 args:(char *)a1;
- (id)initWithLabel:(id)a0 dbCorruptionHandler:(id /* block */)a1;
- (BOOL)_registerStaticDBFunctionsWithError:(id *)a0;
- (BOOL)needsAutovacuum;
- (BOOL)execute:(id)a0 args:(char *)a1;
- (BOOL)attachDBAtPath:(id)a0 as:(id)a1 error:(id *)a2;
- (id)fetch:(id)a0;
- (BOOL)executeWithExpectedIndex:(id)a0 sql:(id)a1;
- (id)fetchWithSlowStatementRadar:(id)a0 objectOfClass:(Class)a1 sql:(id)a2;
- (void)flushToMakeEditsVisibleToIPCReaders;
- (BOOL)executeWithSlowStatementRadar:(id)a0 sql:(id)a1;
- (void)disableProfilingForQueriesInBlock:(id /* block */)a0;
- (id)fetchObjectOfClass:(Class)a0 sql:(id)a1;
- (void)brc_close;

@end
