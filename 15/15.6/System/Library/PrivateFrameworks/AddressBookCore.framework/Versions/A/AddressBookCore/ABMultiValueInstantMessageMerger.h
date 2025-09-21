@interface ABMultiValueInstantMessageMerger : ABMultiValueMerger

+ (char)canHaveSimilarValues;

- (id)reconcileMySubvalue:(id)a0 withTheirs:(id)a1;
- (char)value:(id)a0 isSimilarToValue:(id)a1;

@end
