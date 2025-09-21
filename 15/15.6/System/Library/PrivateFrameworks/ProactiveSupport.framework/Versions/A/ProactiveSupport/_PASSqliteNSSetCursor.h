@class NSSet, NSEnumerator;

@interface _PASSqliteNSSetCursor : _PASSqliteCollectionsCursor {
    NSSet *_set;
    id _currentValue;
    NSEnumerator *_valuesEnumerator;
}

@property (retain, nonatomic) NSSet *collection;

+ (id)planningInfoForValueConstraint:(int)a0;
+ (const char *)sqliteCreateTableStatement;
+ (const char *)sqliteMethodName;

- (void).cxx_destruct;
- (void)setCollection:(id)a0;
- (char)currentIndexEof;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (char)currentIndexedRowSatisfiesConstraints;
- (id)currentIndexedValue;
- (void)finalizeConstraints;
- (void)stepIndexedRow;

@end
