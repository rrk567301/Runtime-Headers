@class NSDictionary, _CDInteractionStore;

@interface _CDTemporalInteractionAdvisor : NSObject

@property (retain) _CDInteractionStore *store;
@property (retain, nonatomic) NSDictionary *consumerToModelMap;

- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (id)adviseInteractionsForDate:(id)a0 usingSettings:(id)a1;
- (id)rankContacts:(id)a0 usingSettings:(id)a1;
- (id)rankerForDate:(id)a0 settings:(id)a1;

@end
