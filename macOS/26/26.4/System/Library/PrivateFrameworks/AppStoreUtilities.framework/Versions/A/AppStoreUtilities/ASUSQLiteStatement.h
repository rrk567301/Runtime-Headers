@class NSString, NSDictionary, ASUSQLiteConnection;

@interface ASUSQLiteStatement : NSObject <ASUSQLiteBinding> {
    ASUSQLiteConnection *_connection;
    struct sqlite3_stmt { } *_statement;
    ASUSQLiteStatement *_strongSelf;
}

@property (readonly, copy, nonatomic) NSDictionary *columnIndexByName;
@property (readonly, nonatomic, getter=isReadOnly) BOOL readOnly;
@property (readonly, copy, nonatomic) NSString *SQL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindURL:(id)a0 atPosition:(int)a1;
- (id)initWithStatement:(struct sqlite3_stmt { } *)a0 onConnection:(id)a1;
- (int)step;
- (void)bindInt64:(long long)a0 atPosition:(int)a1;
- (void)bindDate:(id)a0 atPosition:(int)a1;
- (void)bindDataCopy:(id)a0 atPosition:(int)a1;
- (void)bindFloat:(float)a0 atPosition:(int)a1;
- (int)clearBindings;
- (void).cxx_destruct;
- (void)bindNullAtPosition:(int)a0;
- (void)bindStringCopy:(id)a0 atPosition:(int)a1;
- (int)finalizeStatement;
- (int)reset;
- (void)bindArray:(id)a0 atPosition:(int)a1;
- (void)bindDictionary:(id)a0 atPosition:(int)a1;
- (void)bindData:(id)a0 atPosition:(int)a1;
- (void)bindInt:(int)a0 atPosition:(int)a1;
- (void)bindDouble:(double)a0 atPosition:(int)a1;
- (void)bindNumber:(id)a0 atPosition:(int)a1;
- (void)bindString:(id)a0 atPosition:(int)a1;
- (void)bindUUID:(id)a0 atPosition:(int)a1;

@end
