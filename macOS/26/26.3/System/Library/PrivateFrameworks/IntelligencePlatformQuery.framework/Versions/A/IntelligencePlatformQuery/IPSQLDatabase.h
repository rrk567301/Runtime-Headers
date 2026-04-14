@class BMSQLDatabase;

@interface IPSQLDatabase : NSObject

@property (readonly, nonatomic) BMSQLDatabase *bmsql;

- (id)init;
- (void).cxx_destruct;
- (BOOL)registerFunctionWithName:(id)a0 numArgs:(int)a1 function:(id /* block */)a2 error:(id *)a3;
- (BOOL)registerFunctionWithName:(id)a0 numArgs:(int)a1 function:(id /* block */)a2 userData:(id)a3 error:(id *)a4;
- (id)executeWithQuery:(id)a0 error:(id *)a1;
- (id)initWithBMSQL:(id)a0 databases:(id)a1 sets:(id)a2 useCase:(id)a3 error:(id *)a4;
- (id)initWithStreams:(id)a0 databases:(id)a1 sets:(id)a2 useCase:(id)a3 library:(id)a4 privileges:(id)a5 isColumnAccessLoggingEnabled:(BOOL)a6 error:(id *)a7;

@end
