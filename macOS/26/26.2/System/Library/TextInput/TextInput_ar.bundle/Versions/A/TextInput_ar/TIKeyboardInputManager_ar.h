@class NSArray;

@interface TIKeyboardInputManager_ar : TIKeyboardInputManager_mul

@property (retain, nonatomic) NSArray *wordsMandatingToChooseSecondary;

+ (id)generateKeyLayoutMap;
+ (id)generateKeyLayoutMapReverse;
+ (id)generateKeyLayoutMapReverseV2;
+ (id)generateKeyLayoutMapV2;

- (void)chooseBetterInputMethod;
- (void).cxx_destruct;
- (BOOL)shouldDynamicallySwitchBetweenPrimaryAndSecondary;
- (BOOL)isUsingMultilingual;

@end
