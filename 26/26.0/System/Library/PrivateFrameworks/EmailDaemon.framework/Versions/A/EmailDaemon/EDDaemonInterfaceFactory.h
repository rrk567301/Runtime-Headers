@class EDCategorySubsystem, EDPersistence;

@interface EDDaemonInterfaceFactory : NSObject

@property (retain, nonatomic) EDCategorySubsystem *categorySubsystem;
@property (readonly, nonatomic) EDPersistence *persistence;

- (id)newFetchController;
- (id)newMessageRepositoryWithResumable:(id)a0;
- (id)newAccountRepository;
- (id)initWithPersistence:(id)a0 categorySubsystem:(id)a1;
- (id)newDiagnosticInfoGathererWithServerRemoteClientsProvider:(id)a0;
- (id)sharedInteractionLogger;
- (id)newMailboxRepository;
- (void)test_tearDown;
- (id)newSearchableIndex;
- (id)newActivityRegistry;
- (id)newSenderRepository;
- (id)newOutgoingMessageRepository;
- (id)newVIPManagerInterface;
- (void).cxx_destruct;
- (id)newClientResumerWithClientState:(id)a0;

@end
