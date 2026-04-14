@class CNContactStore, CNChangeHistoryFetchRequest;

@interface CNChangeHistoryFetchExecutor : NSObject

@property (readonly, copy, nonatomic) CNChangeHistoryFetchRequest *request;
@property (readonly, nonatomic) CNContactStore *store;

+ (id)os_log;

- (id)run:(id *)a0;
- (id)keysToFetch;
- (id)initWithRequest:(id)a0 store:(id)a1;
- (id)description;
- (id)deltaSync;
- (void).cxx_destruct;
- (id)fetchEvents:(id *)a0;
- (id)fullSync;
- (id)fetchCount:(id *)a0;
- (id)contactLinkingEventsForContacts:(id)a0 withFactory:(id)a1;
- (id)countOfDeltaSync;
- (BOOL)validateFetchRequest;

@end
