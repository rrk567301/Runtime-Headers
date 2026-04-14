@class CNContactStore;

@interface CRKConcreteContactsPrimitives : NSObject <CRKContactsPrimitives>

@property (readonly, nonatomic) CNContactStore *contactStore;

- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0;
- (id)init;
- (id)fetchMeCardContactWithError:(id *)a0;
- (id)subscribeToContactsChanges:(id /* block */)a0;

@end
