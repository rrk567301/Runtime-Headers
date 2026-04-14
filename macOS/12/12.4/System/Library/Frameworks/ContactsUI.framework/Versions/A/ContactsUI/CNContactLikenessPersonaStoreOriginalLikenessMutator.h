@class CNContact, NSString, PRPersonaStore, CNUIMeContactMonitor;

@interface CNContactLikenessPersonaStoreOriginalLikenessMutator : NSObject <CNContactLikenessMutator>

@property (retain, nonatomic) PRPersonaStore *personaStore;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNUIMeContactMonitor *meMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)addNewLikeness:(id)a0;
- (id)deleteLikeness:(id)a0;
- (id)updateLikeness:(id)a0;
- (id)setLikenessAsCurrent:(id)a0;
- (BOOL)shouldSaveOriginalLikenessOfLikeness:(id)a0;
- (id)initWithPersonaStore:(id)a0 contact:(id)a1 meMonitor:(id)a2;

@end
