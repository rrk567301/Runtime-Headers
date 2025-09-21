@class NSString, NSArray;

@interface ASTSuiteResult : NSObject

@property (retain, nonatomic) NSString *suiteName;
@property (retain, nonatomic) NSArray *components;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 components:(id)a1;

@end
