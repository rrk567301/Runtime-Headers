@class NSString, NSArray;

@interface ASTSuiteResultSection : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *tests;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 tests:(id)a1;

@end
