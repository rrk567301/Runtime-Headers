@class NSString, NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface EDUserNotificationMailboxCutoffController : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSMutableDictionary *mailboxCutoffs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_writeToDefaults;
- (void)_initializeIfNeeded;
- (void)_readFromDefaults;
- (char)_shouldUpdateCutoffForMessage:(id)a0;
- (char)_updateCutoffForMailbox:(id)a0 date:(id)a1;
- (void)clearCutoffForMailbox:(id)a0;
- (id)cutoffDateForMailbox:(id)a0;
- (char)isMessageAboveMailboxCutoff:(id)a0;
- (void)updateCutoffForMailboxesWithMessages:(id)a0;

@end
