@class CNContact, NSString, PRPersonaStore;

@interface CNContactLikenessesPersonaStoreFetchStrategy : NSObject <CNContactLikenessesFetchStrategy>

@property (retain, nonatomic) PRPersonaStore *personaStore;
@property (retain, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;

@end
