@class CCDatabaseCommand, NSArray, CCSQLiteDatabase, NSError;

@interface CCDatabaseEnumerationResult : NSObject

@property (readonly, nonatomic) NSArray *peekedNext;
@property (readonly, nonatomic) struct sqlite3_stmt { } *stmt;
@property (readonly, nonatomic) int column_count;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) CCSQLiteDatabase *database;
@property (readonly, nonatomic) CCDatabaseCommand *command;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_next;
- (id)next;
- (id)peek;
- (id)initWithStatement:(struct sqlite3_stmt { } *)a0 database:(id)a1 command:(id)a2 error:(id)a3;

@end
