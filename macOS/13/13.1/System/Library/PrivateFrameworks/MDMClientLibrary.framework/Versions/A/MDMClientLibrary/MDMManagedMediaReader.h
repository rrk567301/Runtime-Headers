@interface MDMManagedMediaReader : NSObject

+ (id)managedBooks;
+ (id)managedAppIDs;
+ (id)managedAppIDsWithFlags:(unsigned long long)a0;
+ (id)attributesByAppID;

@end
