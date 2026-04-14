@class EDCategorySubsystem, EDPersistence;

@interface EDDaemonInterfaceFactory : NSObject

@property (retain, nonatomic) EDCategorySubsystem *categorySubsystem;
@property (readonly, nonatomic) EDPersistence *persistence;

- (id)newActivityRegistry;
- (id)newMessageRepositoryWithResumable:(id)a0;
- (id)newFetchController;
- (id)newSearchableIndex;
- (id)newVIPManagerInterface;
- (void).cxx_destruct;
- (id)initWithPersistence:(id)a0 categorySubsystem:(id)a1;
- (id)newAccountRepository;
- (id)newClientResumerWithClientState:(id)a0;
- (id)newDiagnosticInfoGathererWithServerRemoteClientsProvider:(id)a0;
- (id)sharedInteractionLogger;
- (id)newSenderRepository;
- (id)newOutgoingMessageRepository;
- (id)newMailboxRepository;
- (void)test_tearDown;

@end
