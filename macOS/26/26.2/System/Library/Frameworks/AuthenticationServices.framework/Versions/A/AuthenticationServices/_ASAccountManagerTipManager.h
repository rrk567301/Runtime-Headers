@class NSArray, NSError;

@interface _ASAccountManagerTipManager : NSObject

+ (void)fetchTipToShow:(void (^)(long long))a0;
+ (void)fetchSharingGroupsThatIncludeFamilyMembersWithCompletionHandler:(void (^)(NSArray *, NSError *))a0;
+ (void)userDidAcknowledgeTip:(long long)a0;

@end
