@class NSString;

@interface CalCalendarMigrationExchangePrincipal : NSObject <CalCalendarMigrationPrincipal>

@property (readonly, copy, nonatomic) NSString *uid;
@property (readonly, copy, nonatomic) NSString *mailbox;
@property (copy, nonatomic) NSString *ownerUid;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isDelegate) BOOL delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)addressURLIsAccountOwner:(id)a0;
- (BOOL)addressIsAccountOwner:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryForAccountProperties;
- (id)initWithUid:(id)a0 mailbox:(id)a1;

@end
