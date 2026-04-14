@class CNContactStore, NSString;
@protocol CNFavoritesLogger;

@interface CNFavoritesLegacyStore : NSObject <CNFavoritesStore>

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) id<CNFavoritesLogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContactStore:(id)a0;
- (void).cxx_destruct;
- (id)XPCDataMapper;
- (id)_entryDictionaries;
- (id)_fetchEntries;
- (BOOL)_saveEntries:(id)a0;
- (BOOL)_savePropertyListData:(id)a0 toPath:(id)a1 entriesCount:(long long)a2;
- (id)fetchEntries;
- (BOOL)saveEntries:(id)a0;
- (void)setlogger:(id)a0;
- (BOOL)shouldSimulateCrashReportForError:(id)a0;

@end
