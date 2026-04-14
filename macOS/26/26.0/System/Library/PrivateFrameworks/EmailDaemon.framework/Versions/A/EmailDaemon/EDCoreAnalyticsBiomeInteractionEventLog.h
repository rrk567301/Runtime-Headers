@class EDBiomeBlackPearlLogger, NSString, NSObject;
@protocol OS_os_log;

@interface EDCoreAnalyticsBiomeInteractionEventLog : NSObject <EFLoggable, EDInteractionEventLog>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) EDBiomeBlackPearlLogger *readBiomeCollector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)persistEvent:(id)a0 date:(id)a1 message:(id)a2 mailbox:(id)a3;
- (void)persistEvent:(id)a0 date:(id)a1 conversationID:(long long)a2 data:(id)a3;
- (void)persistEvent:(id)a0 dataFromMessage:(id)a1 account:(id)a2;
- (void)persistEvent:(id)a0 date:(id)a1 message:(id)a2 data:(id)a3;
- (void)persistEvent:(id)a0 date:(id)a1 message:(id)a2 mailboxType:(long long)a3;
- (void)persistEvent:(id)a0 dataFromMessage:(id)a1;
- (void).cxx_destruct;
- (id)initWithReadBiomeCollector:(id)a0;

@end
