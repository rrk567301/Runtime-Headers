@class NSObject, NSString, NSUUID, ML3DatabaseConnection, NSMutableArray, MLMediaLibraryService;
@protocol OS_dispatch_queue;

@interface ML3StatementAccumulator : NSObject {
    MLMediaLibraryService *_xpcService;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (nonatomic) unsigned long long statementThreshold;
@property (readonly, nonatomic) NSMutableArray *statementQueue;
@property (readonly, nonatomic) NSString *databasePath;
@property (readonly, nonatomic) ML3DatabaseConnection *connection;
@property (retain, nonatomic) NSUUID *existingTransactionIdentifier;
@property (nonatomic) unsigned long long priorityLevel;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (char)_onQueueFlushAndWait:(char)a0;
- (char)enqueueStatement:(id)a0;
- (char)flushAndWait:(char)a0;

@end
