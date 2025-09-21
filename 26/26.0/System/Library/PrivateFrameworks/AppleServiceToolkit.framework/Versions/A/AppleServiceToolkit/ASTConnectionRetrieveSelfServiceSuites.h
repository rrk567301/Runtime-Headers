@class NSString;

@interface ASTConnectionRetrieveSelfServiceSuites : ASTMaterializedConnection

@property (retain, nonatomic) NSString *configCode;

- (id)parameters;
- (id)method;
- (id)endpoint;
- (void).cxx_destruct;
- (id)initWithConfigCode:(id)a0;

@end
