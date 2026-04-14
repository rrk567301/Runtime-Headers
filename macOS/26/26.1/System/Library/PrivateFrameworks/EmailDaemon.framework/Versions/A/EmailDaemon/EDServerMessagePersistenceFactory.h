@class EDPersistenceDatabase, EDGmailLabelPersistence;

@interface EDServerMessagePersistenceFactory : NSObject

@property (readonly, nonatomic) EDPersistenceDatabase *database;
@property (readonly, nonatomic) EDGmailLabelPersistence *gmailLabelPersistence;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDatabase:(id)a0 gmailLabelPersistence:(id)a1;
- (id)serverMessagePersistenceForMailboxURL:(id)a0;

@end
