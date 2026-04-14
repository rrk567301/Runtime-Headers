@class CNContactStore;

@interface ABCoreRecentsPersonEntryFactory : ABPersonEntryFactory

@property (readonly, nonatomic) CNContactStore *contactStore;

- (void).cxx_destruct;
- (id)cnContactForIdentifier:(id)a0;
- (id)initWithProperty:(id)a0 propertyFilterPredicate:(id)a1 propertyType:(long long)a2 resultType:(unsigned long long)a3;
- (id)personEntryForRecord:(id)a0;

@end
