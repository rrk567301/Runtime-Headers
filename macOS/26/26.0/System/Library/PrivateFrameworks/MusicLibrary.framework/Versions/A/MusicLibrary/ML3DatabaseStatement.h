@class NSString;

@interface ML3DatabaseStatement : NSObject {
    NSString *_sql;
}

@property (readonly, nonatomic) NSString *sql;
@property (readonly, nonatomic) struct sqlite3_stmt { } *sqliteStatement;
@property (nonatomic) BOOL clearBindingsAfterRunning;
@property (nonatomic) BOOL isExecuting;

- (BOOL)isReadOnly;
- (void)bindBytes:(const void *)a0 length:(int)a1 forParameterAtPosition:(int)a2;
- (int)reset;
- (void)bindUTF8String:(const char *)a0 forParameterAtPosition:(int)a1;
- (void)bindUTF8StringNoCopy:(const char *)a0 length:(int)a1 forParameterAtPosition:(int)a2;
- (void)bindNullForParameterAtPosition:(int)a0;
- (void)dealloc;
- (void)bindValuesForParameterNames:(id)a0;
- (BOOL)isBusy;
- (void)bindInt64:(long long)a0 forParameterAtPosition:(int)a1;
- (void)bindDouble:(double)a0 forParameterAtPosition:(int)a1;
- (void)bindValue:(id)a0 forParameterAtPosition:(int)a1;
- (void)bindBytesNoCopy:(const void *)a0 length:(int)a1 forParameterAtPosition:(int)a2;
- (void)bindValuesInArray:(id)a0;
- (id)description;
- (int)clearBindings;
- (void)bindInt:(int)a0 forParameterAtPosition:(int)a1;
- (id)initWithSQLiteStatement:(struct sqlite3_stmt { } *)a0 SQL:(id)a1;
- (int)step;
- (int)finalizeStatement;
- (void)bindUTF8StringNoCopy:(const char *)a0 forParameterAtPosition:(int)a1;
- (void).cxx_destruct;

@end
