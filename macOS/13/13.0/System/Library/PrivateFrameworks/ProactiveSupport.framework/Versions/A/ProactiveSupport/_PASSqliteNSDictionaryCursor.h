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

- (void).cxx_destruct;
- (void)setCollection:(id)a0;
- (id)currentIndexedValue;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (void)stepIndexedRow;
- (void)applyKeyConstraint:(int)a0 withArgument:(id)a1;
- (void)finalizeConstraints;
- (id)currentIndexedKey;

@end
