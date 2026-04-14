@class CNContactStore, CNContactFetchRequest;

@interface CNContactFetchExecutor : NSObject

@property (readonly, copy, nonatomic) CNContactFetchRequest *request;
@property (readonly, nonatomic) CNContactStore *store;

+ (id)os_log;

- (id)run:(id *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRequest:(id)a0 store:(id)a1;

@end
