@class CNContactStore, CNXPCContactsSupport, NSString;
@protocol CNFavoritesLogger;

@interface CNFavoritesSyncStore : NSObject <CNFavoritesStore>

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) id<CNFavoritesLogger> logger;
@property (retain, nonatomic) CNXPCContactsSupport *contactsSupport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContactStore:(id)a0;
- (void).cxx_destruct;
- (id)_entryRepresentations;
- (id)_fetchEntries;
- (BOOL)_saveEntries:(id)a0;
- (id)fetchEntries;
- (BOOL)saveEntries:(id)a0;
- (void)setlogger:(id)a0;

@end
