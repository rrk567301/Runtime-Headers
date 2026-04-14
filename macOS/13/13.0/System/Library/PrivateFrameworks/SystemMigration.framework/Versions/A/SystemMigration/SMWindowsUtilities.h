@interface SMWindowsUtilities : NSObject

+ (id)migratedWindowsUsers;
+ (BOOL)markUser:(id)a0 withWindowsSID:(id)a1;
+ (BOOL)setAttributesOnDirectory:(id)a0 deepEnumeration:(BOOL)a1 attributes:(id)a2 error:(id *)a3;

@end
