@interface SMWindowsUtilities : NSObject

+ (char)markUser:(id)a0 withWindowsSID:(id)a1;
+ (id)migratedWindowsUsers;
+ (id)protectedAppDataContainerPathForCurrentUser;
+ (id)protectedAppDataContainerPathForUser:(unsigned int)a0;
+ (char)setAttributesOnDirectory:(id)a0 deepEnumeration:(char)a1 attributes:(id)a2 error:(id *)a3;

@end
