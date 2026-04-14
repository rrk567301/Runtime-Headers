@class NSMutableArray;

@interface FCObservable : NSObject

@property (retain, nonatomic) NSMutableArray *observers;
@property (nonatomic) unsigned long long token;
@property (retain, nonatomic) id value;

- (id)observe:(id /* block */)a0;
- (id)initWithValue:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)next:(id)a0;
- (void)quietNext:(id)a0;

@end
