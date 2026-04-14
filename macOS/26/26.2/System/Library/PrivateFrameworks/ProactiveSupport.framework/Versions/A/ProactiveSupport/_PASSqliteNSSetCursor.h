@class NSSet, NSEnumerator;

@interface _PASSqliteNSSetCursor : _PASSqliteCollectionsCursor {
    NSSet *_set;
    id _currentValue;
    NSEnumerator *_valuesEnumerator;
}

@property (retain, nonatomic) NSSet *collection;

+ (const char *)sqliteCreateTableStatement;
+ (id)planningInfoForValueConstraint:(int)a0;
+ (const char *)sqliteMethodName;

- (BOOL)currentIndexEof;
- (id)currentIndexedValue;
- (void)finalizeConstraints;
- (void).cxx_destruct;
- (void)setCollection:(id)a0;
- (void)stepIndexedRow;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;

@end
