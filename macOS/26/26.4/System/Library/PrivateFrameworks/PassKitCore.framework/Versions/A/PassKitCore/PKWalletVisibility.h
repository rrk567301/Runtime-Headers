@interface PKWalletVisibility : NSObject

+ (BOOL)isWalletRestricted;
+ (id)setOfActiveRestrictionUUIDs;
+ (BOOL)isWalletVisible;
+ (void)updateWalletVisibility;

@end
