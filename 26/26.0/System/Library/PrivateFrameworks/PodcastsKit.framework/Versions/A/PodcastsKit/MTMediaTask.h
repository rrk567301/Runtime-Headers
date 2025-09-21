@class NSArray, AMSMediaTask;

@interface MTMediaTask : NSObject

@property (retain, nonatomic) AMSMediaTask *mediaTask;
@property (retain, nonatomic) NSArray *identifiers;
@property (nonatomic) BOOL charts;

- (id)initWithType:(long long)a0;
- (void).cxx_destruct;
- (void)perform:(id /* block */)a0;

@end
