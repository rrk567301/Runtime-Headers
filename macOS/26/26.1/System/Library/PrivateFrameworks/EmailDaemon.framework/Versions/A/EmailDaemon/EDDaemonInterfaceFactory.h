@class EDCategorySubsystem, EDPersistence;

@interface EDDaemonInterfaceFactory : NSObject

@property (retain, nonatomic) EDCategorySubsystem *categorySubsystem;
@property (readonly, nonatomic) EDPersistence *persistence;

- (void)test_tearDown;
- (id)newSearchableIndex;
- (id)newActivityRegistry;
- (id)newFetchController;
- (id)newAccountRepository;
- (id)newSenderRepository;
- (id)newClientResumerWithClientState:(id)a0;
- (id)initWithPersistence:(id)a0 categorySubsystem:(id)a1;
- (id)newDiagnosticInfoGathererWithServerRemoteClientsProvider:(id)a0;
- (void).cxx_destruct;
- (id)newMailboxRepository;
- (id)newVIPManagerInterface;
- (id)newOutgoingMessageRepository;
- (id)newMessageRepositoryWithResumable:(id)a0;
- (id)sharedInteractionLogger;

@end
