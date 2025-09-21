@class NSArray, NSString, _bmFMDatabase, NSURL;

@interface BMTableStore : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSArray *classArray;
@property (readonly, nonatomic) NSString *sqlReplace;
@property (readonly, nonatomic) _bmFMDatabase *db;
@property (readonly, nonatomic) NSURL *dbURL;
@property (readonly, nonatomic) NSString *tableName;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (char)closeDB;
- (char)addTable:(id)a0 named:(id)a1 error:(id *)a2;
- (char)openDB;
- (id)selectTableNamed:(id)a0 error:(id *)a1;
- (char)upsertRows:(id)a0 error:(id *)a1;
- (char)setupClassArray:(id)a0 table:(id)a1 named:(id)a2 error:(id *)a3;

@end
