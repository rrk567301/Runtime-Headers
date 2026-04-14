@class BMSQLDatabase, NSString, BMSource, BMStream, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface EDBiomeBlackPearlLogger : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) BMStream *stream;
@property (retain, nonatomic) BMSource *source;
@property (retain, nonatomic) BMSQLDatabase *database;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (int)_biomeCategoryValueFrom:(long long)a0;
- (int)_biomeDomainValueFrom:(long long)a0;
- (int)_biomeFedStatsCategoryValueFrom:(long long)a0;
- (int)_biomeMailboxValueFrom:(long long)a0;
- (int)_biomeRecategorizationScopeValueFrom:(long long)a0;
- (int)_biomeRecategorizationValueFrom:(long long)a0;
- (id)_domainStringFrom:(long long)a0;
- (void)_donateToBiomeWithEvent:(id)a0;
- (void)deleteEventsForMessages:(id)a0;
- (id)initWithStreamType:(unsigned long long)a0;
- (void)logEventForMessageID:(id)a0 eventType:(id)a1 messageDictionary:(id)a2;
- (void)logRecategorizationFedStatsForMessage:(id)a0;
- (id)queryAllEventsForMessageID:(id)a0 andEventType:(id)a1;

@end
