@class NSArray;

@interface CCSetIntegrityCheckResult : NSObject

@property (readonly, nonatomic) BOOL passed;
@property (readonly, nonatomic) unsigned long long checksPerformed;
@property (readonly, nonatomic) unsigned long long checksFailed;
@property (readonly, nonatomic) NSArray *issues;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPassed:(BOOL)a0 checksPerformed:(unsigned long long)a1 checksFailed:(unsigned long long)a2 issues:(id)a3;

@end
