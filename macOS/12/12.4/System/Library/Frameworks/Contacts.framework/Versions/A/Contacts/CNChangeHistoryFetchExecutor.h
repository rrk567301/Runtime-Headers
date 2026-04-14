@class CNContactStore, CNChangeHistoryFetchRequest;

@interface CNChangeHistoryFetchExecutor : NSObject

@property (readonly, copy, nonatomic) CNChangeHistoryFetchRequest *request;
@property (readonly, nonatomic) CNContactStore *store;

+ (id)os_log;

- (id)description;
- (void).cxx_destruct;
- (id)run:(id *)a0;
- (id)keysToFetch;
- (id)initWithRequest:(id)a0 store:(id)a1;
- (BOOL)validateFetchRequest;
- (id)fetchEvents:(id *)a0;
- (id)fetchCount:(id *)a0;
- (id)deltaSync;
- (id)fullSync;
- (id)countOfDeltaSync;
- (id)contactLinkingEventsForContacts:(id)a0 withFactory:(id)a1;

@end
