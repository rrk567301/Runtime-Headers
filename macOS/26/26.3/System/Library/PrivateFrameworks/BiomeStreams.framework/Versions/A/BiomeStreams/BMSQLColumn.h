@class NSString;

@interface BMSQLColumn : NSObject

@property (readonly, copy, nonatomic) id /* block */ extractBlock;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long dataType;
@property (readonly, nonatomic) BOOL requestOnly;

+ (id)new;

- (id)initWithName:(id)a0 dataType:(long long)a1;
- (id)description;
- (id)init;
- (id)initWithName:(id)a0 dataType:(long long)a1 requestOnly:(BOOL)a2 extractBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (BOOL)setSQLiteValueFromRow:(id)a0 sqliteContext:(struct sqlite3_context { } *)a1 error:(id *)a2;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
