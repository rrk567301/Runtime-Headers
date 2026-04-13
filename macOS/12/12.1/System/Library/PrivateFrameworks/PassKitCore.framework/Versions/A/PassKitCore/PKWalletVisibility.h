@interface PKWalletVisibility : NSObject

+ (BOOL)isWalletVisible;
+ (BOOL)isWalletRestricted;
+ (void)updateWalletVisibility;
+ (id)setOfActiveRestrictionUUIDs;

@end
