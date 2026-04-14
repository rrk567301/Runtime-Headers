@class NSNumber, NSString, ASUSQLiteStatement;

@interface ASUSQLiteQueryResults : NSObject <ASUSQLiteBinding> {
    ASUSQLiteStatement *_statement;
}

@property (readonly, nonatomic) long long firstInt64Value;
@property (readonly, copy, nonatomic) NSNumber *firstNumberValue;
@property (readonly, nonatomic) BOOL hasRows;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindDouble:(double)a0 atPosition:(int)a1;
- (void)bindDictionary:(id)a0 atPosition:(int)a1;
- (void)bindStringCopy:(id)a0 atPosition:(int)a1;
- (void)bindFloat:(float)a0 atPosition:(int)a1;
- (void)bindString:(id)a0 atPosition:(int)a1;
- (void)bindArray:(id)a0 atPosition:(int)a1;
- (void)bindInt:(int)a0 atPosition:(int)a1;
- (void)bindInt64:(long long)a0 atPosition:(int)a1;
- (void)enumerateRowsUsingBlock:(id /* block */)a0;
- (void)bindDataCopy:(id)a0 atPosition:(int)a1;
- (int)clearBindings;
- (void)bindNumber:(id)a0 atPosition:(int)a1;
- (void)bindURL:(id)a0 atPosition:(int)a1;
- (void)bindDate:(id)a0 atPosition:(int)a1;
- (void)bindNullAtPosition:(int)a0;
- (void)bindData:(id)a0 atPosition:(int)a1;
- (void).cxx_destruct;
- (void)bindUUID:(id)a0 atPosition:(int)a1;

@end
