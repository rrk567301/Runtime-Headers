@class NSString;

@interface ML3DatabaseStatement : NSObject {
    NSString *_sql;
}

@property (readonly, nonatomic) NSString *sql;
@property (readonly, nonatomic) struct sqlite3_stmt { } *sqliteStatement;
@property (nonatomic) BOOL clearBindingsAfterRunning;
@property (nonatomic) BOOL isExecuting;

- (BOOL)isBusy;
- (BOOL)isReadOnly;
- (void)bindValuesForParameterNames:(id)a0;
- (int)step;
- (void)bindBytesNoCopy:(const void *)a0 length:(int)a1 forParameterAtPosition:(int)a2;
- (void)bindInt64:(long long)a0 forParameterAtPosition:(int)a1;
- (void)bindInt:(int)a0 forParameterAtPosition:(int)a1;
- (void)bindUTF8StringNoCopy:(const char *)a0 length:(int)a1 forParameterAtPosition:(int)a2;
- (void)bindUTF8String:(const char *)a0 forParameterAtPosition:(int)a1;
- (void)bindValuesInArray:(id)a0;
- (id)initWithSQLiteStatement:(struct sqlite3_stmt { } *)a0 SQL:(id)a1;
- (void)bindValue:(id)a0 forParameterAtPosition:(int)a1;
- (int)clearBindings;
- (void).cxx_destruct;
- (int)finalizeStatement;
- (int)reset;
- (id)description;
- (void)bindNullForParameterAtPosition:(int)a0;
- (void)bindBytes:(const void *)a0 length:(int)a1 forParameterAtPosition:(int)a2;
- (void)bindDouble:(double)a0 forParameterAtPosition:(int)a1;
- (void)bindUTF8StringNoCopy:(const char *)a0 forParameterAtPosition:(int)a1;
- (void)dealloc;

@end
