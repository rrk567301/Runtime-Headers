@class NSArray;

@interface TIKeyboardInputManager_ar : TIKeyboardInputManager_mul

@property (retain, nonatomic) NSArray *wordsMandatingToChooseSecondary;

+ (id)generateKeyLayoutMap;
+ (id)generateKeyLayoutMapReverse;
+ (id)generateKeyLayoutMapReverseV2;
+ (id)generateKeyLayoutMapV2;

- (BOOL)shouldDynamicallySwitchBetweenPrimaryAndSecondary;
- (BOOL)isUsingMultilingual;
- (void)chooseBetterInputMethod;
- (void).cxx_destruct;

@end
