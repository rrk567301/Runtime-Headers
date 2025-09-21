@class NSString, NSArray, NSDictionary, NSError, BMSQLDatabase;

@interface BMSQLResultSet : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _finished;
    unsigned long long _cursor;
    NSArray *_columns;
}

@property (readonly, nonatomic) struct sqlite3_stmt { } *stmt;
@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, nonatomic) BMSQLDatabase *database;
@property (readonly, nonatomic) NSArray *columns;
@property (readonly, nonatomic) NSDictionary *row;
@property (readonly, copy, nonatomic) NSError *error;

+ (id)new;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)next;
- (char)_next;
- (id)initWithQuery:(id)a0 error:(id)a1 database:(id)a2;
- (id)initWithStatement:(struct sqlite3_stmt { } *)a0 database:(id)a1;

@end
