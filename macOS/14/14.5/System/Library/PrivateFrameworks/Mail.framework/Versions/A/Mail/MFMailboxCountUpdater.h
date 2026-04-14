@class NSString, MFMailbox, EMQuery, EFAutoCancelationToken, NSArray, EDMessageCountQueryHandler, NSObject, EMFocus;
@protocol OS_os_log;

@interface MFMailboxCountUpdater : NSObject <EMCurrentFocusObserver, EMMessageRepositoryCountQueryObserver_xpc, EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) MFMailbox *mailbox;
@property (readonly, nonatomic) EMQuery *query;
@property (readonly, nonatomic) EDMessageCountQueryHandler *queryHandler;
@property (retain) EMFocus *currentFocus;
@property (retain, nonatomic) EFAutoCancelationToken *focusObservationToken;
@property (readonly, copy, nonatomic) NSArray *mailboxesToCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)countDidChange:(long long)a0 acknowledgementToken:(id)a1;
- (void)currentFocusChanged:(id)a0;
- (id)initWithMailbox:(id)a0 query:(id)a1 messagePersistence:(id)a2 hookRegistry:(id)a3 refireDebounceInterval:(double)a4 mailboxesToCache:(id)a5;
- (void)setFocusController:(id)a0;

@end
