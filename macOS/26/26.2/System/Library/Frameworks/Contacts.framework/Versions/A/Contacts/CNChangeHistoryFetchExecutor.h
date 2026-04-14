@class CNContactStore, CNChangeHistoryFetchRequest;

@interface CNChangeHistoryFetchExecutor : NSObject

@property (readonly, copy, nonatomic) CNChangeHistoryFetchRequest *request;
@property (readonly, nonatomic) CNContactStore *store;

+ (id)os_log;

- (id)run:(id *)a0;
- (id)deltaSync;
- (id)fetchEvents:(id *)a0;
- (id)fullSync;
- (id)initWithRequest:(id)a0 store:(id)a1;
- (id)contactLinkingEventsForContacts:(id)a0 withFactory:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (BOOL)validateFetchRequest;
- (id)fetchCount:(id *)a0;
- (id)countOfDeltaSync;
- (id)keysToFetch;

@end
