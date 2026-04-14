@class CNContactStore, CNChangeHistoryFetchRequest;

@interface CNChangeHistoryFetchExecutor : NSObject

@property (readonly, copy, nonatomic) CNChangeHistoryFetchRequest *request;
@property (readonly, nonatomic) CNContactStore *store;

+ (id)os_log;

- (id)keysToFetch;
- (id)fetchEvents:(id *)a0;
- (id)run:(id *)a0;
- (BOOL)validateFetchRequest;
- (id)deltaSync;
- (void).cxx_destruct;
- (id)fullSync;
- (id)description;
- (id)countOfDeltaSync;
- (id)fetchCount:(id *)a0;
- (id)initWithRequest:(id)a0 store:(id)a1;
- (id)contactLinkingEventsForContacts:(id)a0 withFactory:(id)a1;

@end
