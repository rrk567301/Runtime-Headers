@interface ABMultiValueAddressMerger : ABMultiValueMerger

+ (BOOL)canHaveSimilarValues;

- (BOOL)value:(id)a0 isSimilarToValue:(id)a1;
- (id)reconcileMySubvalue:(id)a0 withTheirs:(id)a1;

@end
