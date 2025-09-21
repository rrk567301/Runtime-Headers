@interface BMDistributedContextUtilities : NSObject

+ (id)currentBootSessionUUID;
+ (char)isSupportEnabledForBMDSL:(id)a0 useCase:(id)a1 withError:(id *)a2;
+ (void)updateDescriptionForError:(id *)a0 withErrorCode:(long long)a1;

@end
