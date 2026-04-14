@class NSMutableArray;

@interface CRKComparator : NSObject

@property (readonly, nonatomic) NSMutableArray *allCriteria;

+ (id)compareWithCriteria:(id /* block */)a0;
+ (id /* block */)compare;

- (id /* block */)run;
- (id)init;
- (void).cxx_destruct;
- (id)compareWithCriteria:(id /* block */)a0;
- (long long)runComparison;
- (id /* block */)compare;

@end
