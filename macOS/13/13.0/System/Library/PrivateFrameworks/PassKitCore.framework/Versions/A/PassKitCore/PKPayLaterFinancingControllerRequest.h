@class NSDecimalNumber, NSString, NSMutableOrderedSet, NSError;

@interface PKPayLaterFinancingControllerRequest : NSObject

@property (readonly, nonatomic) NSDecimalNumber *amount;
@property (readonly, copy, nonatomic) NSString *optionIdentifierToCancel;
@property (readonly, nonatomic) unsigned long long cancellationReason;
@property (readonly, copy, nonatomic) NSError *stateMachineError;
@property (readonly, nonatomic) NSMutableOrderedSet *completions;

- (id)description;
- (void).cxx_destruct;
- (BOOL)coalesceWithRequest:(id)a0;
- (id)initWithTransactionAmount:(id)a0 completion:(id /* block */)a1;
- (id)initWithTransactionAmount:(id)a0 optionIdentifierToCancel:(id)a1 cancellationReason:(unsigned long long)a2 stateMachineError:(id)a3 completion:(id /* block */)a4;
- (void)addCompletions:(id)a0;

@end
