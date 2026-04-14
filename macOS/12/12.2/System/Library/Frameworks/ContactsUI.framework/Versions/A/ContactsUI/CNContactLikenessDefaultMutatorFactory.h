@class CNContactStore, NSString, PRPersonaStore, CNUIMeContactMonitor;

@interface CNContactLikenessDefaultMutatorFactory : NSObject <CNContactLikenessMutatorFactory>

@property (retain, nonatomic) PRPersonaStore *personaStore;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNUIMeContactMonitor *meMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)likenessMutatorForContact:(id)a0 likeness:(id)a1 mutationType:(long long)a2;
- (id)initWithContactStore:(id)a0 personaStore:(id)a1 meMonitor:(id)a2;

@end
