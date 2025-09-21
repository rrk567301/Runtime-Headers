@interface CNSaveRequestVerifier : NSObject

+ (id)os_log;
+ (char)_areDirectPropertiesOfSaveRequest:(id)a0 authorizedForSavingWithContext:(id)a1 error:(id *)a2;
+ (char)_arePropertiesOfContacts:(id)a0 inSaveRequest:(id)a1 authorizedForSavingWithContext:(id)a2 error:(id *)a3;
+ (char)_isEditingOfContacts:(id)a0 inSaveRequest:(id)a1 authorizedForSavingWithContext:(id)a2 error:(id *)a3;
+ (id)insertedAndUpdatedContactsForSaveRequest:(id)a0;
+ (char)isSaveRequest:(id)a0 authorizedForSavingWithContext:(id)a1 error:(id *)a2;
+ (char)isValidSaveRequest:(id)a0 error:(id *)a1;

@end
