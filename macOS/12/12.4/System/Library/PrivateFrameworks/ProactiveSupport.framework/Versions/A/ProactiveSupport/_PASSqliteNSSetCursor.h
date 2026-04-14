@class NSSet, NSEnumerator;

@interface _PASSqliteNSSetCursor : _PASSqliteCollectionsCursor {
    NSSet *_set;
    id _currentValue;
    NSEnumerator *_valuesEnumerator;
}

@property (retain, nonatomic) NSSet *collection;

+ (const char *)sqliteMethodName;
+ (const char *)sqliteCreateTableStatement;
+ (id)planningInfoForValueConstraint:(int)a0;

- (void).cxx_destruct;
- (void)setCollection:(id)a0;
- (BOOL)currentIndexEof;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (void)stepIndexedRow;
- (id)currentIndexedValue;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (void)finalizeConstraints;

@end
