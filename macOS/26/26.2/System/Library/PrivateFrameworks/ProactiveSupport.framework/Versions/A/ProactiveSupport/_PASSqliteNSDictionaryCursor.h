@class NSDictionary, NSEnumerator;

@interface _PASSqliteNSDictionaryCursor : _PASSqliteKeyValueCursor {
    NSDictionary *_dictionary;
    NSEnumerator *_keysEnumerator;
    id _currentKey;
    id _currentValue;
    id _valueEqualTo;
}

@property (retain, nonatomic) NSDictionary *collection;

+ (id)planningInfoForKeyConstraint:(int)a0;
+ (const char *)sqliteMethodName;

- (id)currentIndexedValue;
- (void)finalizeConstraints;
- (void).cxx_destruct;
- (void)setCollection:(id)a0;
- (void)stepIndexedRow;
- (id)currentIndexedKey;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (void)applyKeyConstraint:(int)a0 withArgument:(id)a1;

@end
