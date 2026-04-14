@interface ABNameCollisionMap : NSObject

+ (id)nameCollisionMapWithAddressBook:(id)a0 targetStore:(id)a1;
+ (id)nameCollisionMapForContacts:(id)a0;
+ (id)nameCollisionMapWithContext:(id)a0 targetStore:(id)a1;
+ (id)partialDictionaryRepresentationsOfContactsInContext:(id)a0 targetStore:(id)a1;
+ (id)newCollisionMapKeyForContact:(id)a0;
+ (id)_collisionMapKeyForPerson:(id)a0;
+ (id)_collisionMapKeyForCompany:(id)a0;
+ (id)collisionMapKeyForContact:(id)a0;
+ (id)nameCollisionMapWithAddressBook:(id)a0 targetAccount:(id)a1;
+ (id)collisionMapKeyForPerson:(id)a0;

@end
