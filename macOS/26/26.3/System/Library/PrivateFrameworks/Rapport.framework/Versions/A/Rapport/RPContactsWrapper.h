@interface RPContactsWrapper : NSObject

+ (id)createContactStore;
+ (void)donateContactToSharing:(id)a0;
+ (id)getKeysToFetchForMeCard;
+ (void)getMeCard:(id /* block */)a0 queue:(id)a1;

@end
