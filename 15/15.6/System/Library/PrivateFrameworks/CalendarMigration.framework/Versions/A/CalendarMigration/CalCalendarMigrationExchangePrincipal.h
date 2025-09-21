@class NSString;

@interface CalCalendarMigrationExchangePrincipal : NSObject <CalCalendarMigrationPrincipal>

@property (readonly, copy, nonatomic) NSString *uid;
@property (readonly, copy, nonatomic) NSString *mailbox;
@property (copy, nonatomic) NSString *ownerUid;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isDelegate) char delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)addressIsAccountOwner:(id)a0;
- (char)addressURLIsAccountOwner:(id)a0;
- (id)dictionaryForAccountProperties;
- (id)initWithUid:(id)a0 mailbox:(id)a1;

@end
