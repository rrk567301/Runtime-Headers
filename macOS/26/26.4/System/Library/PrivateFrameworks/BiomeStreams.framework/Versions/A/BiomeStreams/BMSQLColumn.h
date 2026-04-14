@class NSString;

@interface BMSQLColumn : NSObject

@property (readonly, copy, nonatomic) id /* block */ extractBlock;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long dataType;
@property (readonly, nonatomic) BOOL requestOnly;

+ (id)new;

- (id)initWithName:(id)a0 dataType:(long long)a1 requestOnly:(BOOL)a2 extractBlock:(id /* block */)a3;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 dataType:(long long)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (BOOL)setSQLiteValueFromRow:(id)a0 sqliteContext:(struct sqlite3_context { } *)a1 error:(id *)a2;

@end
