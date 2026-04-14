@class CNContactStore, CNChangeHistoryFetchRequest;

@interface CNChangeHistoryFetchExecutor : NSObject

@property (readonly, copy, nonatomic) CNChangeHistoryFetchRequest *request;
@property (readonly, nonatomic) CNContactStore *store;

+ (id)os_log;

- (id)initWithRequest:(id)a0 store:(id)a1;
- (id)run:(id *)a0;
- (id)countOfDeltaSync;
- (id)description;
- (id)keysToFetch;
- (id)fullSync;
- (id)fetchEvents:(id *)a0;
- (id)fetchCount:(id *)a0;
- (BOOL)validateFetchRequest;
- (void).cxx_destruct;
- (id)contactLinkingEventsForContacts:(id)a0 withFactory:(id)a1;
- (id)deltaSync;

@end
