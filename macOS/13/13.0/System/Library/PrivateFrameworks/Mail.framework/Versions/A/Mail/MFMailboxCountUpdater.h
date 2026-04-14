@class MFMailbox, EFQuery, NSString, NSObject, EDMessageCountQueryHandler;
@protocol OS_os_log;

@interface MFMailboxCountUpdater : NSObject <EMMessageRepositoryCountQueryObserver_xpc, EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) MFMailbox *mailbox;
@property (readonly, nonatomic) EFQuery *query;
@property (readonly, nonatomic) EDMessageCountQueryHandler *queryHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
