@interface SUOSUFollowUpHelper : NSObject

+ (id)sharedInstance;
+ (id)_createFLFollowUpItemWithFollowUpHelperType:(long long)a0;
+ (BOOL)_postSUAvailableFollowUp;
+ (BOOL)_postSUTonightFollowUp;
+ (BOOL)clearFollowUp;
+ (BOOL)postFollowUpWithScheduledUpdates:(BOOL)a0;

@end
