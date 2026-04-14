@class CCDatabaseCommand, CCSQLitePreparedStatement, CCSQLiteDatabase, NSError;

@interface CCDatabaseEnumerationResult : NSObject <CCDatabaseValueRowEnumerator>

@property (readonly, nonatomic) CCSQLitePreparedStatement *statement;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) CCSQLiteDatabase *database;
@property (readonly, nonatomic) CCDatabaseCommand *command;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)nextRow;
- (id)initWithStatement:(id)a0 database:(id)a1 command:(id)a2 error:(id)a3;

@end
