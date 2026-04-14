@class NSObject;
@protocol OS_dispatch_queue;

@interface ULEventLog : NSObject

@property (nonatomic) struct ULDatabaseStoreInterface { void /* function */ **x0; } *dbStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)shared;

- (void)log:(id)a0;
- (void)disconnectFromDatabase;
- (void).cxx_destruct;
- (id)init;
- (void)connectToDatabase:(struct ULDatabaseStoreInterface { void /* function */ **x0; } *)a0;
- (void)printLogEventsSince:(double)a0;

@end
