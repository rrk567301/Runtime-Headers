@interface SFSharablePasswordReceiver : NSObject

+ (BOOL)passwordHasRequiredDataToSave:(id)a0;
+ (BOOL)canSavePasswordWithoutConflict:(id)a0;
+ (id)savePassword:(id)a0;

@end
