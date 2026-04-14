@interface SUUtilities : NSObject

+ (BOOL)systemIsAPFS;
+ (BOOL)systemIsMemberOfReadOnlySystemGroup;
+ (id)daemonCacheDirectoryAppendedWithPath:(id)a0;
+ (unsigned long long)attemptToReclaimSpaceUsingCacheDeleteWithSpaceRequired:(unsigned long long)a0;
+ (BOOL)prepareInstallAssistantWithPath:(id)a0;
+ (id)installAssistantPreparationStatus;
+ (unsigned int)uidFromCurrentAuditToken;
+ (id)trimBugFixFromVersion:(id)a0;
+ (id)trimMinorFromVersion:(id)a0;
+ (long long)compareVersion:(id)a0 againstVersion:(id)a1;
+ (id)daemonTempDirectoryAppendedWithPath:(id)a0;
+ (id)usernameForCurrentAuditTokenWithOutUID:(unsigned int *)a0;
+ (BOOL)currentUserIsOnConsole;

@end
