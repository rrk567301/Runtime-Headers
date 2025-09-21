@class NSString;
@protocol EFSQLQueryLogging;

@interface EFSQLPreparedStatement : NSObject {
    struct sqlite3_stmt { } *_compiled;
}

@property (retain, nonatomic) id<EFSQLQueryLogging> queryLogger;
@property (copy, nonatomic) NSString *transactionLabel;
@property (readonly, nonatomic) char isFinalized;
@property (readonly, copy, nonatomic) NSString *originalString;
@property (readonly, nonatomic) struct sqlite3_stmt { } *compiled;
@property (nonatomic) double allowedExecutionTime;

+ (id)log;

- (void)dealloc;
- (id)debugDescription;
- (void).cxx_destruct;
- (char)finalizeWithError:(id *)a0;
- (char)resetWithError:(id *)a0;
- (char)clearBindingsWithError:(id *)a0;
- (char)executeUsingBlock:(id /* block */)a0 error:(id *)a1;
- (char)executeWithIndexedBindings:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (char)executeWithNamedBindings:(id)a0 rowsChanged:(unsigned long long *)a1 error:(id *)a2;
- (char)executeWithNamedBindings:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (id)initWithString:(id)a0 connection:(id)a1 transactionLabel:(id)a2 queryLogger:(id)a3;

@end
