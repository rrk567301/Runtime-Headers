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

- (id)currentIndexedValue;
- (void)setCollection:(id)a0;
- (void)finalizeConstraints;
- (void)applyKeyConstraint:(int)a0 withArgument:(id)a1;
- (void)stepIndexedRow;
- (id)currentIndexedKey;
- (void).cxx_destruct;
- (BOOL)currentIndexedRowSatisfiesConstraints;

@end
