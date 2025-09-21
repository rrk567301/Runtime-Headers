@class NSMutableArray;

@interface TRISQLiteCKDatabaseFailureInjectionDelegate : NSObject <TRISQLiteCKDatabaseDelegate, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *queryErrors;
@property (retain, nonatomic) NSMutableArray *fetchErrors;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithErrorForAllOperations:(id)a0;
- (id)initWithQueryErrors:(id)a0 fetchErrors:(id)a1;
- (char)shouldProcessFetchOperation:(id)a0 error:(id *)a1;
- (char)shouldProcessQueryOperation:(id)a0 error:(id *)a1;

@end
