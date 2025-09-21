@class NSString, br_pacer;

@interface BRCPQLConnection : PQLConnection {
    br_pacer *_batchingPacer;
    int _changeCount;
    double _flushInterval;
    char _flushImmediately;
    char _autovacuumInProgress;
    long long _changesOverride;
}

@property (nonatomic) char verboseProfilingEnabled;
@property (nonatomic) char profilingEnabled;
@property (readonly, nonatomic) unsigned long long vmStepsExecuted;
@property (copy, nonatomic) id /* block */ lockedHandler;
@property (readonly, nonatomic) char isReadonly;
@property (retain, nonatomic) NSString *assertionPersonaIdentifier;

- (id)init;
- (void).cxx_destruct;
- (long long)changes;
- (id)fetch:(id)a0;
- (long long)sizeInBytes;
- (char)execute:(id)a0;
- (void)assertOnQueue;
- (id)fetchObjectOfClass:(Class)a0 sql:(id)a1;
- (char)execute:(id)a0 args:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a1;
- (char)executeRaw:(id)a0;
- (id)fetch:(id)a0 args:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a1;
- (id)fetchObject:(id /* block */)a0 sql:(id)a1;
- (id)fetchObject:(id /* block */)a0 sql:(id)a1 args:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a2;
- (id)fetchObjectOfClass:(Class)a0 initializer:(SEL)a1 sql:(id)a2;
- (id)fetchObjectOfClass:(Class)a0 initializer:(SEL)a1 sql:(id)a2 args:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a3;
- (id)fetchObjectOfClass:(Class)a0 sql:(id)a1 args:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a2;
- (char)openAtURL:(id)a0 withFlags:(int)a1 error:(id *)a2;
- (void)setProfilingHook:(id /* block */)a0;
- (char)needsAutovacuum;
- (char)_registerStaticDBFunctionsWithError:(id *)a0;
- (void)_setErrorHandlerWithDBCorruptionHandler:(id /* block */)a0;
- (void)_setLockedHandler;
- (char)_shouldFlushWithChangeCount:(int)a0;
- (char)_validateIsRunningWithCorrectPersona;
- (char)attachDBAtPath:(id)a0 as:(id)a1 error:(id *)a2;
- (void)autovacuumIfNeeded;
- (void)brc_close;
- (char)brc_closeWithError:(id *)a0;
- (void)disableProfilingForQueriesInBlock:(id /* block */)a0;
- (char)executeWithErrorHandler:(id /* block */)a0 sql:(id)a1;
- (char)executeWithExpectedIndex:(id)a0 sql:(id)a1;
- (char)executeWithSlowStatementRadar:(id)a0 sql:(id)a1;
- (id)fetchWithSlowStatementRadar:(id)a0 objectOfClass:(Class)a1 sql:(id)a2;
- (id)fetchWithSlowStatementRadar:(id)a0 objectWithConstructor:(id /* block */)a1 sql:(id)a2;
- (id)fetchWithSlowStatementRadar:(id)a0 sql:(id)a1;
- (void)flushToMakeEditsVisibleToIPCReaders;
- (id)initWithLabel:(id)a0 dbCorruptionHandler:(id /* block */)a1;
- (void)scheduleFlushWithCheckpoint:(char)a0 whenFlushed:(id /* block */)a1;
- (void)usePacedBatchingOnTargetQueue:(id)a0 withInterval:(double)a1 changeCount:(int)a2;

@end
