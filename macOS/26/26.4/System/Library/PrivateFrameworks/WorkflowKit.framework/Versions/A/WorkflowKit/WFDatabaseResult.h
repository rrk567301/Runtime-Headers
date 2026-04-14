@class NSHashTable, NSError, NSArray, NSPredicate, WFDatabaseResultState, NSObject, NSNumber, WFDatabase;
@protocol OS_dispatch_queue, WFDatabaseResultLoader;

@interface WFDatabaseResult : NSObject

@property (readonly, nonatomic) NSArray *staticDescriptors;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSHashTable *observersTable;
@property (retain, nonatomic) NSNumber *cachedCount;
@property (retain, nonatomic) WFDatabaseResultState *state;
@property (retain, nonatomic) NSArray *descriptors;
@property (retain, nonatomic) NSError *fetchError;
@property (readonly, nonatomic) NSArray *observers;
@property (readonly, nonatomic) id<WFDatabaseResultLoader> loader;
@property (readonly, nonatomic) WFDatabase *database;
@property (readonly, nonatomic) unsigned long long count;
@property (copy, nonatomic) NSPredicate *searchPredicate;

+ (id)callbackQueue;

- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (void)reset;
- (id)description;
- (void)registerObserver:(id)a0;
- (id)initWithDatabase:(id)a0 loader:(id)a1;
- (id)initWithStaticDescriptors:(id)a0;
- (void)updateDescriptorsAndNotify:(id)a0 state:(id)a1;

@end
