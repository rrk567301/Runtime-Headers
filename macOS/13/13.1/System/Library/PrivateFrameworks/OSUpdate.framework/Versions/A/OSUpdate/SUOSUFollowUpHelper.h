@interface SUOSUFollowUpHelper : NSObject

+ (id)sharedInstance;
+ (BOOL)postFollowUp;
+ (BOOL)postRollbackSplatRevokedFollowUp;
+ (BOOL)clearFollowUp;

@end
