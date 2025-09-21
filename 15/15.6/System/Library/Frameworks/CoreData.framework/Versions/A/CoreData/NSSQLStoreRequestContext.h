@class NSError, NSManagedObjectContext, NSSQLRowCache, NSSQLCore, NSPersistentStoreRequest, NSSQLiteConnection, NSQueryGenerationToken, NSException, NSNumber;

@interface NSSQLStoreRequestContext : NSObject {
    NSSQLCore *_sqlCore;
    NSSQLiteConnection *_connection;
    NSManagedObjectContext *_context;
    NSError *_error;
    NSException *_exception;
    NSQueryGenerationToken *_queryGeneration;
    NSNumber *_transactionID;
    char _useColoredLogging;
    char _useConcurrentFetching;
    char _hasHistoryTracking;
    char _storeIsInMemory;
}

@property (readonly, nonatomic) NSPersistentStoreRequest *persistentStoreRequest;
@property (retain, nonatomic) id result;
@property (readonly, nonatomic) NSSQLRowCache *rowCache;
@property (readonly, nonatomic) char isWritingRequest;

- (void)dealloc;
- (void)executePrologue;
- (void)executeEpilogue;
- (void)clearSQLiteStatements;
- (char)executeRequestCore:(id *)a0;
- (char)executeRequestUsingConnection:(id)a0;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;

@end
