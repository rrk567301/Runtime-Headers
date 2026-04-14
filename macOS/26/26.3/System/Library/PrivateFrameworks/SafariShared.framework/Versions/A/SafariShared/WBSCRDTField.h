@class WBSCRDTGeneration, NSMutableDictionary;
@protocol NSCopying;

@interface WBSCRDTField : NSObject <NSCopying> {
    id _value;
    id _valueSource;
    id /* block */ _valueProvider;
    id /* block */ _valueUpdater;
    NSMutableDictionary *_metadata;
}

@property (copy, nonatomic) id<NSCopying> value;
@property (copy, nonatomic) WBSCRDTGeneration *generation;
@property (nonatomic) BOOL shouldIncrementGeneration;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)description;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)mergeWithField:(id)a0;
- (id)copyWithValueSource:(id)a0;
- (void)incrementGenerationIfNeeded;
- (id)initWithValue:(id)a0 generation:(id)a1;
- (id)initWithValue:(id)a0 valueSource:(id)a1 valueProvider:(id /* block */)a2 valueUpdater:(id /* block */)a3 generation:(id)a4 metadata:(id)a5;
- (id)initWithValueSource:(id)a0 valueProvider:(id /* block */)a1 valueUpdater:(id /* block */)a2 generation:(id)a3;
- (void)setValue:(id)a0 incrementGenerationIfNeeded:(BOOL)a1;

@end
