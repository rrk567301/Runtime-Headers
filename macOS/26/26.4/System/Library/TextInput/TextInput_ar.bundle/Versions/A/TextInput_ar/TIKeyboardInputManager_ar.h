@interface TIKeyboardInputManager_ar : TIKeyboardInputManager_mul

+ (id)generateKeyLayoutMap;
+ (id)generateKeyLayoutMapReverse;
+ (id)generateKeyLayoutMapReverseV2;
+ (id)generateKeyLayoutMapV2;

- (BOOL)isUsingMultilingual;
- (BOOL)shouldDynamicallySwitchBetweenPrimaryAndSecondary;

@end
