@class NSUUID, MGClientService, NSPredicate;

@interface MGGroupQuery : NSObject

@property (readonly, nonatomic) MGClientService *service;
@property (readonly, copy, nonatomic) id /* block */ updateHandler;
@property (retain, nonatomic) NSUUID *query;
@property (readonly, nonatomic) NSPredicate *predicate;

+ (id)queryWithPredicate:(id)a0 updateHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConnectionProvider:(id)a0 predicate:(id)a1 updateHandler:(id /* block */)a2;
- (id)initWithPredicate:(id)a0 updateHandler:(id /* block */)a1;

@end
