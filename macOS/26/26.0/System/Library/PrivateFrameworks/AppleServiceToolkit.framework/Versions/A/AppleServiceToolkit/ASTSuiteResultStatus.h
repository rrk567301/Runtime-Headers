@class NSString, NSNumber;

@interface ASTSuiteResultStatus : NSObject

@property (retain, nonatomic) NSString *status;
@property (retain, nonatomic) NSNumber *statusCode;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithStatus:(id)a0 statusCode:(id)a1;

@end
