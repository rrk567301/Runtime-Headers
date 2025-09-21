@interface ICKeychain : NSObject

+ (id)accessControlObjectWithProtection:(void *)a0 flags:(unsigned long long)a1 error:(id *)a2;
+ (char)booleanForIdentifier:(id)a0 account:(id)a1;
+ (id)dataForIdentifier:(id)a0 account:(id)a1;
+ (id)dataForIdentifier:(id)a0 account:(id)a1 authenticationContext:(id)a2;
+ (id)dataForIdentifier:(id)a0 account:(id)a1 isSynced:(char)a2 authenticationContext:(id)a3;
+ (char)deleteItemsForIdentifier:(id)a0 account:(id)a1 error:(id *)a2;
+ (char)deleteItemsForIdentifier:(id)a0 account:(id)a1 isSynced:(char)a2 error:(id *)a3;
+ (char)deleteItemsOfType:(unsigned long long)a0 account:(id)a1 error:(id *)a2;
+ (char)deleteItemsOfType:(unsigned long long)a0 account:(id)a1 isSynced:(char)a2 error:(id *)a3;
+ (void)fetchItemsWithCompletionHandler:(id /* block */)a0;
+ (char)hasItemForIdentifier:(id)a0 account:(id)a1;
+ (char)isSyncAvailableForAccount:(id)a0;
+ (id)itemsOfType:(unsigned long long)a0 account:(id)a1 authenticationContext:(id)a2;
+ (id)itemsOfType:(unsigned long long)a0 account:(id)a1 isSynced:(char)a2 authenticationContext:(id)a3;
+ (id)queryForItemClass:(id)a0 forIdentifier:(id)a1 account:(id)a2 isSynced:(char)a3 type:(unsigned long long)a4 authenticationContext:(id)a5 returnData:(char)a6 limit:(id)a7;
+ (char)setBoolean:(char)a0 forIdentifier:(id)a1 account:(id)a2 shouldSync:(char)a3 error:(id *)a4;
+ (char)setData:(id)a0 forIdentifier:(id)a1 account:(id)a2 error:(id *)a3;
+ (char)setData:(id)a0 forIdentifier:(id)a1 account:(id)a2 shouldSync:(char)a3 error:(id *)a4;
+ (char)setData:(id)a0 forIdentifier:(id)a1 account:(id)a2 type:(unsigned long long)a3 shouldSync:(char)a4 accessFlags:(unsigned long long)a5 accessGroup:(id)a6 error:(id *)a7;
+ (char)setString:(id)a0 forIdentifier:(id)a1 account:(id)a2 shouldSync:(char)a3 error:(id *)a4;
+ (char)setUnsignedInteger:(unsigned long long)a0 forIdentifier:(id)a1 account:(id)a2 shouldSync:(char)a3 error:(id *)a4;
+ (char)shouldFetchItemsWithError:(id *)a0;
+ (id)stringForIdentifier:(id)a0 account:(id)a1 isSynced:(char)a2;
+ (void)tests_setLastItemsError:(id)a0 lastItemsErrorDate:(id)a1 lastItemsFetchDate:(id)a2;
+ (unsigned long long)unsignedIntegerForIdentifier:(id)a0 account:(id)a1;

@end
