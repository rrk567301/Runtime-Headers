@class NSArray, AMSMediaTask;

@interface MTMediaTask : NSObject

@property (retain, nonatomic) AMSMediaTask *mediaTask;
@property (retain, nonatomic) NSArray *identifiers;
@property (nonatomic) char charts;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)perform:(id /* block */)a0;

@end
