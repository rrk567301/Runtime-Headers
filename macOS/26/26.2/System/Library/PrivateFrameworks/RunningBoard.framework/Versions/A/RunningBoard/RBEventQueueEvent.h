@interface RBEventQueueEvent : NSObject

@property (retain, nonatomic) id context;
@property (nonatomic) double eventTime;
@property (copy, nonatomic) id /* block */ action;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
