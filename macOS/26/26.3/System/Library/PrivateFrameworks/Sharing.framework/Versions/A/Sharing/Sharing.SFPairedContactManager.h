@interface Sharing.SFPairedContactManager : NSObject

+ (void)fetchAllContactsWithCompletion:(id /* block */)a0;
+ (void)donateContactWithIdentifier:(id)a0 imageData:(id)a1 deviceName:(id)a2 givenName:(id)a3 familyName:(id)a4 expiryDate:(id)a5 completion:(id /* block */)a6;
+ (void)fetchContactWithIdentifier:(id)a0 completion:(id /* block */)a1;
+ (void)removeAllContactsWithCompletion:(id /* block */)a0;
+ (void)removeContactWithIdentifier:(id)a0 completion:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;

@end
