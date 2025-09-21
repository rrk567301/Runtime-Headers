@class ABMutableMultiValue, ABMultiValue;

@interface ABMultiValueMerger : NSObject {
    ABMultiValue *_originalMultiValue;
}

@property (readonly) char hasChanges;
@property (readonly) ABMutableMultiValue *result;

+ (id)mergerForProperty:(id)a0 initialValue:(id)a1;
+ (char)canHaveSimilarValues;

- (void)dealloc;
- (id)reconcileMySubvalue:(id)a0 withTheirs:(id)a1;
- (void)addValuesFromMultiValue:(id)a0;
- (unsigned long long)indexOfSimilarValue:(id)a0;
- (unsigned long long)indexOfValue:(id)a0;
- (id)initWithMultiValue:(id)a0;
- (void)mergeMultiValue:(id)a0;
- (char)value:(id)a0 isSimilarToValue:(id)a1;

@end
