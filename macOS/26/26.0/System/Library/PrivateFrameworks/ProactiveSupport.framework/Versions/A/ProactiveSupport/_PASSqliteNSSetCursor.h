@class NSSet, NSEnumerator;

@interface _PASSqliteNSSetCursor : _PASSqliteCollectionsCursor {
    NSSet *_set;
    id _currentValue;
    NSEnumerator *_valuesEnumerator;
}

@property (retain, nonatomic) NSSet *collection;

+ (const char *)sqliteMethodName;
+ (id)planningInfoForValueConstraint:(int)a0;
+ (const char *)sqliteCreateTableStatement;

- (id)currentIndexedValue;
- (void)setCollection:(id)a0;
- (void)finalizeConstraints;
- (BOOL)currentIndexEof;
- (void)stepIndexedRow;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (void).cxx_destruct;
- (BOOL)currentIndexedRowSatisfiesConstraints;

@end
