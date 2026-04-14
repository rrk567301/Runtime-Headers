@interface IRBiomeEventValidator : NSObject

+ (BOOL)isValidHomeKitClientAccessoryControlEvent:(id)a0;
+ (BOOL)isValidHomeKitClientActionSetEvent:(id)a0;
+ (BOOL)isValidHomeKitClientMediaAccessoryControlEvent:(id)a0;

- (id)init;

@end
