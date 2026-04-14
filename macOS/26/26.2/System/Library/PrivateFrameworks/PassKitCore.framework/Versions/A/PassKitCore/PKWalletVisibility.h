@interface PKWalletVisibility : NSObject

+ (id)setOfActiveRestrictionUUIDs;
+ (BOOL)isWalletRestricted;
+ (BOOL)isWalletVisible;
+ (void)updateWalletVisibility;

@end
