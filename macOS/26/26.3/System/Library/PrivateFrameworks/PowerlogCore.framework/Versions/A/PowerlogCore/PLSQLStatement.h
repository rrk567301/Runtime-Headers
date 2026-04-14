@class NSObject;
@protocol OS_dispatch_semaphore;

@interface PLSQLStatement : NSObject

@property struct sqlite3_stmt { } *statement;
@property (readonly) BOOL isInsert;
@property (readonly) BOOL isDelete;
@property (retain) NSObject<OS_dispatch_semaphore> *dbSem;

- (void)finalize;
- (int)bindValue:(id)a0 withFormater:(short)a1 atPosition:(int)a2;
- (void).cxx_destruct;
- (id)perform;
- (void)dealloc;
- (id)initWithSQLQuery:(id)a0 forDatabase:(struct sqlite3 { } *)a1 withDBSem:(id)a2 result:(int *)a3;
- (void)reset;

@end
