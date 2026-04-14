@class WBSCRDTGeneration, NSString, NSMutableDictionary;
@protocol NSCopying;

@interface WBSCRDTField : NSObject <NSCopying> {
    id _value;
    id /* block */ _valueProvider;
    id /* block */ _valueUpdater;
    NSMutableDictionary *_metadata;
}

@property (copy, nonatomic) id<NSCopying> value;
@property (copy, nonatomic) WBSCRDTGeneration *generation;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (nonatomic) BOOL shouldIncrementGeneration;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)initWithValue:(id)a0 generation:(id)a1 deviceIdentifier:(id)a2;
- (id)initWithValueProvider:(id /* block */)a0 valueUpdater:(id /* block */)a1 generation:(id)a2 deviceIdentifier:(id)a3;
- (id)initWithValue:(id)a0 valueProvider:(id /* block */)a1 valueUpdater:(id /* block */)a2 generation:(id)a3 deviceIdentifier:(id)a4;
- (void)incrementGenerationIfNeeded;
- (void)setValue:(id)a0 incrementGenerationIfNeeded:(BOOL)a1;
- (long long)mergeWithField:(id)a0;

@end
