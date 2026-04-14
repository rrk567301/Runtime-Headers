@class NSArray;

@interface _PASSqliteNSArrayCursor : _PASSqliteRowIdIndexSetCursor {
    id _equalTo;
}

@property (retain, nonatomic) NSArray *collection;

+ (const char *)sqliteMethodName;
+ (id)planningInfoForValueConstraint:(int)a0;

- (id)init;
- (void).cxx_destruct;
- (void)setCollection:(id)a0;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (id)currentIndexedValue;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;

@end
