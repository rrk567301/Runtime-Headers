@class ABPerson;

@interface ABUserActivityScore : NSObject

@property (retain) ABPerson *person;
@property unsigned long long score;

+ (id)matchWithPerson:(id)a0 score:(unsigned long long)a1;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithPerson:(id)a0 score:(unsigned long long)a1;

@end
