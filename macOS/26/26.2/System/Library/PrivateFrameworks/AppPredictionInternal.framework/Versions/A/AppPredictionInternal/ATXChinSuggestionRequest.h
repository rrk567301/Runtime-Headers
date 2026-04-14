@interface ATXChinSuggestionRequest : NSObject

@property (nonatomic) unsigned long long debugIdentifier;
@property (readonly, nonatomic) id /* block */ acceptedBlock;
@property (readonly, nonatomic) id /* block */ rejectedBlock;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAcceptedBlock:(id /* block */)a0 rejectedBlock:(id /* block */)a1;

@end
