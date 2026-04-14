@class DecisionDetails;

@interface ManagedEvent : NSObject

@property (nonatomic) unsigned long long id_number;
@property (retain, nonatomic) DecisionDetails *details;

- (id)initWithId:(unsigned long long)a0 details:(id)a1;
- (void)serializeToXPCObject:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
