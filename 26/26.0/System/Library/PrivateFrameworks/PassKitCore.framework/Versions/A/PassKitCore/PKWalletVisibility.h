@interface PKWalletVisibility : NSObject

+ (void)updateWalletVisibility;
+ (BOOL)isWalletVisible;
+ (BOOL)isWalletRestricted;
+ (id)setOfActiveRestrictionUUIDs;

@end
