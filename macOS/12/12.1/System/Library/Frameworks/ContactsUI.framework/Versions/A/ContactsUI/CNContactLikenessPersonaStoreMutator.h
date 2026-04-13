@class CNContact, NSString, PRPersonaStore;
@protocol CNContactLikenessMutator;

@interface CNContactLikenessPersonaStoreMutator : NSObject <CNContactLikenessMutator>

@property (retain, nonatomic) PRPersonaStore *personaStore;
@property (retain, nonatomic) id<CNContactLikenessMutator> contactStoreMutator;
@property (retain, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPersonaStore:(id)a0;
- (id)addNewLikeness:(id)a0;
- (id)deleteLikeness:(id)a0;
- (id)updateLikeness:(id)a0;
- (id)setLikenessAsCurrent:(id)a0;

@end
