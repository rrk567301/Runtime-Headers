@class NSArray;

@interface ASTSelfServiceDestination : NSObject

@property (nonatomic) long long endpoint;
@property (retain, nonatomic) NSArray *suites;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithEndpoint:(long long)a0 suites:(id)a1;

@end
