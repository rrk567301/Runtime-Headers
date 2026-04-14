@class NSObject;
@protocol OS_dispatch_queue;

@interface ULControlEventReplayLogger : NSObject

@property (nonatomic) struct ULDatabaseStoreInterface { void /* function */ **x0; } *dbStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)shared;

- (void).cxx_destruct;
- (void)disconnectFromDatabase;
- (id)init;
- (void)logEvent:(long long)a0;
- (void)connectToDatabase:(void *)a0;

@end
