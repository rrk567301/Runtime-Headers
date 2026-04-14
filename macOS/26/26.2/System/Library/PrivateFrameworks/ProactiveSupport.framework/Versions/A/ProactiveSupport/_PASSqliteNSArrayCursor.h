@class NSArray;

@interface _PASSqliteNSArrayCursor : _PASSqliteRowIdIndexSetCursor {
    id _equalTo;
}

@property (retain, nonatomic) NSArray *collection;

+ (id)planningInfoForValueConstraint:(int)a0;
+ (const char *)sqliteMethodName;

- (id)currentIndexedValue;
- (void).cxx_destruct;
- (void)setCollection:(id)a0;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (id)init;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;

@end
