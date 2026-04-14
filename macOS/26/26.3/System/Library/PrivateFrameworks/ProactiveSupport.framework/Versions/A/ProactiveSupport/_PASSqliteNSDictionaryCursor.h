@class NSDictionary, NSEnumerator;

@interface _PASSqliteNSDictionaryCursor : _PASSqliteKeyValueCursor {
    NSDictionary *_dictionary;
    NSEnumerator *_keysEnumerator;
    id _currentKey;
    id _currentValue;
    id _valueEqualTo;
}

@property (retain, nonatomic) NSDictionary *collection;

+ (const char *)sqliteMethodName;
+ (id)planningInfoForKeyConstraint:(int)a0;

- (void)setCollection:(id)a0;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (void)applyKeyConstraint:(int)a0 withArgument:(id)a1;
- (id)currentIndexedValue;
- (void).cxx_destruct;
- (void)stepIndexedRow;
- (void)finalizeConstraints;
- (id)currentIndexedKey;

@end
