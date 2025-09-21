@class NSString;

@interface BMSQLColumn : NSObject

@property (readonly, copy, nonatomic) id /* block */ extractBlock;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long dataType;
@property (readonly, nonatomic) char requestOnly;

+ (id)new;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 dataType:(long long)a1;
- (id)initWithName:(id)a0 dataType:(long long)a1 requestOnly:(char)a2 extractBlock:(id /* block */)a3;
- (char)setSQLiteValueFromRow:(id)a0 sqliteContext:(struct sqlite3_context { } *)a1 error:(id *)a2;

@end
