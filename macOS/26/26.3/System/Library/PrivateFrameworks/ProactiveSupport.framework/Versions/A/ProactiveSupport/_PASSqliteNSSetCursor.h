@class NSSet, NSEnumerator;

@interface _PASSqliteNSSetCursor : _PASSqliteCollectionsCursor {
    NSSet *_set;
    id _currentValue;
    NSEnumerator *_valuesEnumerator;
}

@property (retain, nonatomic) NSSet *collection;

+ (const char *)sqliteCreateTableStatement;
+ (const char *)sqliteMethodName;
+ (id)planningInfoForValueConstraint:(int)a0;

- (void)setCollection:(id)a0;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (id)currentIndexedValue;
- (BOOL)currentIndexEof;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (void).cxx_destruct;
- (void)stepIndexedRow;
- (void)finalizeConstraints;

@end
