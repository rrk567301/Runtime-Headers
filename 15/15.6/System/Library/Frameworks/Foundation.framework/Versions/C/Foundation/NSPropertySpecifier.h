@interface NSPropertySpecifier : NSScriptObjectSpecifier

+ (unsigned int)_keyCodeFromRecord:(id)a0;

- (char)_putKeyFormAndDataInRecord:(id)a0;
- (id)_specifiedIndexesOfObjectsInContainer:(id)a0;
- (long long *)_specifiedIndicesOfObjectOrObjectsInContainer:(id)a0 count:(long long *)a1;
- (id)_specifiedValueInContainer:(id)a0;
- (char)_specifiesMultipleIndexedObjectsPerContainer;
- (char)_specifiesSingleIndexedObjectPerContainer;

@end
