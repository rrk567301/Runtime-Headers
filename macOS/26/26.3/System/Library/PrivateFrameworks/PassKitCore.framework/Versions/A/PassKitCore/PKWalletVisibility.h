@interface PKWalletVisibility : NSObject

+ (BOOL)isWalletVisible;
+ (id)setOfActiveRestrictionUUIDs;
+ (void)updateWalletVisibility;
+ (BOOL)isWalletRestricted;

@end
