@class NSString, NSMutableArray;

@interface TokenArgumentCollector : NSObject

@property (retain, nonatomic) NSMutableArray *tokenArguments;
@property (copy, nonatomic) NSString *query;

- (id)initWithQuery:(id)a0;
- (void).cxx_destruct;
- (void)addArguments:(id)a0 argLabel:(long long)a1;

@end
