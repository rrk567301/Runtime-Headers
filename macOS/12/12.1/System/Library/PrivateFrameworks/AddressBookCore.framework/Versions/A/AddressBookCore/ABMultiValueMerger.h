@class ABMutableMultiValue, ABMultiValue;

@interface ABMultiValueMerger : NSObject {
    ABMultiValue *_originalMultiValue;
}

@property (readonly) BOOL hasChanges;
@property (readonly) ABMutableMultiValue *result;

+ (id)mergerForProperty:(id)a0 initialValue:(id)a1;
+ (BOOL)canHaveSimilarValues;

- (void)dealloc;
- (void)mergeMultiValue:(id)a0;
- (BOOL)value:(id)a0 isSimilarToValue:(id)a1;
- (id)reconcileMySubvalue:(id)a0 withTheirs:(id)a1;
- (id)initWithMultiValue:(id)a0;
- (unsigned long long)indexOfValue:(id)a0;
- (void)addValuesFromMultiValue:(id)a0;
- (unsigned long long)indexOfSimilarValue:(id)a0;

@end
