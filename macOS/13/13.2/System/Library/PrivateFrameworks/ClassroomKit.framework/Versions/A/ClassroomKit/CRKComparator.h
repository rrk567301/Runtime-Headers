@class NSMutableArray;

@interface CRKComparator : NSObject

@property (readonly, nonatomic) NSMutableArray *allCriteria;

+ (id)compareWithCriteria:(id /* block */)a0;
+ (id /* block */)compare;

- (id)init;
- (id /* block */)run;
- (void).cxx_destruct;
- (id)compareWithCriteria:(id /* block */)a0;
- (id /* block */)compare;
- (long long)runComparison;

@end
