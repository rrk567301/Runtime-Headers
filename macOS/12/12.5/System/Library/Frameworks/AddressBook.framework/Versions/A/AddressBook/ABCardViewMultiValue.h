@class NSString, NSArray, NSMutableArray, ABCardViewPersonMapper;
@protocol ABCardViewProperty;

@interface ABCardViewMultiValue : NSObject <ABCardViewMultiValue> {
    NSMutableArray *_entries;
    NSMutableArray *_removedEntryIdentifiers;
    NSArray *_personIdentifiers;
    id<ABCardViewProperty> _property;
}

@property (retain, nonatomic) ABCardViewPersonMapper *personMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)multiValueWithLabel:(id)a0 value:(id)a1 property:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void).cxx_destruct;
- (id)values;
- (id)key;
- (id)labelAtIndex:(unsigned long long)a0;
- (id)identifiers;
- (id)valueAtIndex:(unsigned long long)a0;
- (id)entries;
- (id)labels;
- (id)initWithProperty:(id)a0;
- (BOOL)containsValue:(id)a0;
- (id)defaultLabel;
- (id)entryAtIndex:(unsigned long long)a0;
- (id)identifierAtIndex:(unsigned long long)a0;
- (id)labelForIdentifier:(id)a0;
- (id)valueForIdentifier:(id)a0;
- (id)initWithMultiValue:(id)a0;
- (id)initialLabels;
- (id)multiValueByUpdatingWithBlock:(id /* block */)a0;
- (BOOL)isValueEmptyAtIndex:(unsigned long long)a0;
- (BOOL)isDuplicateIndex:(unsigned long long)a0;
- (BOOL)isSuggestedIndex:(unsigned long long)a0;
- (void)eachEntry:(id /* block */)a0;
- (unsigned long long)indexOfValueForIdentifier:(id)a0;
- (id)availableLabels;
- (BOOL)hasEmptyValue;
- (id)personIdentifiersAtIndex:(unsigned long long)a0;
- (id)multiValueIdentifiersAtIndex:(unsigned long long)a0;
- (id)personIdentifierAtIndex:(unsigned long long)a0;
- (id)multiValueIdentifierAtIndex:(unsigned long long)a0;
- (id)availableLabelsForPersonIdentifier:(id)a0;
- (id)initialLabelsForPersonIdentifier:(id)a0;
- (id)constraintForPersonIdentifier:(id)a0;
- (id)localizedLabelAtIndex:(unsigned long long)a0;
- (id)availableLabelsAtIndex:(unsigned long long)a0;
- (BOOL)customLabelsSupportedAtIndex:(unsigned long long)a0;
- (struct ABCardActionMultiValueIdentifier { id x0; id x1; })cardActionIdentifierForMultiValueIdentifier:(id)a0;
- (BOOL)isReadOnlyIndex:(unsigned long long)a0;
- (BOOL)isPrivateValueIndex:(unsigned long long)a0;
- (id)suggestedValueAtIndex:(unsigned long long)a0;
- (id)removedEntryIdentifiers;
- (id)firstValueForLabel:(id)a0;
- (id)valuesForLabel:(id)a0;

@end
