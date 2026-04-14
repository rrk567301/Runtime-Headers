@class NSMutableArray;

@interface FCObservable : NSObject

@property (retain, nonatomic) NSMutableArray *observers;
@property (nonatomic) unsigned long long token;
@property (retain, nonatomic) id value;

- (void)next:(id)a0;
- (id)initWithValue:(id)a0;
- (id)observe:(id /* block */)a0;
- (void).cxx_destruct;
- (void)quietNext:(id)a0;
- (id)init;
- (void)dealloc;

@end
