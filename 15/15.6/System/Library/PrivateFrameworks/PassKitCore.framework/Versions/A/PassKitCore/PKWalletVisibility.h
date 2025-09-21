@interface PKWalletVisibility : NSObject

+ (char)isWalletVisible;
+ (char)isWalletRestricted;
+ (id)setOfActiveRestrictionUUIDs;
+ (void)updateWalletVisibility;

@end
