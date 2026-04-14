@class CNContactStore;

@interface SPCoreSpotlightInteractionHandler : NSObject

@property (retain, nonatomic) CNContactStore *contactStore;

- (void).cxx_destruct;
- (id)attributeForIntent:(id)a0 direction:(long long)a1;
- (id)interestingContactIdentifiersFromIntent:(id)a0;
- (void)handleInteraction:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;

@end
