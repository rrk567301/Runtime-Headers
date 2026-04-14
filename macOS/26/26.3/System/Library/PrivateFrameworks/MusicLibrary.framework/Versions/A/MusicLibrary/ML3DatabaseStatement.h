@class NSString;

@interface ML3DatabaseStatement : NSObject {
    NSString *_sql;
}

@property (readonly, nonatomic) NSString *sql;
@property (readonly, nonatomic) struct sqlite3_stmt { } *sqliteStatement;
@property (nonatomic) BOOL clearBindingsAfterRunning;
@property (nonatomic) BOOL isExecuting;

- (int)finalizeStatement;
- (BOOL)isBusy;
- (BOOL)isReadOnly;
- (int)clearBindings;
- (void)bindUTF8StringNoCopy:(const char *)a0 forParameterAtPosition:(int)a1;
- (id)description;
- (void)bindValuesForParameterNames:(id)a0;
- (void)bindUTF8String:(const char *)a0 forParameterAtPosition:(int)a1;
- (void)bindBytes:(const void *)a0 length:(int)a1 forParameterAtPosition:(int)a2;
- (void)bindValuesInArray:(id)a0;
- (void)bindValue:(id)a0 forParameterAtPosition:(int)a1;
- (void).cxx_destruct;
- (int)step;
- (void)bindBytesNoCopy:(const void *)a0 length:(int)a1 forParameterAtPosition:(int)a2;
- (void)bindUTF8StringNoCopy:(const char *)a0 length:(int)a1 forParameterAtPosition:(int)a2;
- (void)bindInt64:(long long)a0 forParameterAtPosition:(int)a1;
- (void)bindNullForParameterAtPosition:(int)a0;
- (void)dealloc;
- (int)reset;
- (void)bindInt:(int)a0 forParameterAtPosition:(int)a1;
- (void)bindDouble:(double)a0 forParameterAtPosition:(int)a1;
- (id)initWithSQLiteStatement:(struct sqlite3_stmt { } *)a0 SQL:(id)a1;

@end
