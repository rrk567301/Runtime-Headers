@class CNContactStore, NSString;

@interface CNRefetchingContactIdentifierExpander : NSObject <CNContactPosterUnifiedContactIdentifierExpansion>

@property (readonly) CNContactStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContactStore:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)refetchContact:(id)a0;
- (id)expandIdentifiersForContact:(id)a0;
- (id)expandIdentifiersForContactWithIdentifier:(id)a0;
- (id)expandIdentifiersForRefetchedContact:(id)a0;
- (id)fetchContactWithIdentifier:(id)a0;
- (id)preferredIdentifierForContact:(id)a0;
- (id)preferredIdentifierForContactWithIdentifier:(id)a0;

@end
