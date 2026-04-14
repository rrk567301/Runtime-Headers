@class EDCategorySubsystem, EDPersistence;

@interface EDDaemonInterfaceFactory : NSObject

@property (retain, nonatomic) EDCategorySubsystem *categorySubsystem;
@property (readonly, nonatomic) EDPersistence *persistence;

- (id)newVIPManagerInterface;
- (id)newOutgoingMessageRepository;
- (id)newDiagnosticInfoGathererWithServerRemoteClientsProvider:(id)a0;
- (id)newMessageRepositoryWithResumable:(id)a0;
- (id)newClientResumerWithClientState:(id)a0;
- (id)initWithPersistence:(id)a0 categorySubsystem:(id)a1;
- (void).cxx_destruct;
- (id)newFetchController;
- (id)sharedInteractionLogger;
- (id)newSenderRepository;
- (id)newActivityRegistry;
- (id)newMailboxRepository;
- (id)newAccountRepository;
- (void)test_tearDown;
- (id)newSearchableIndex;

@end
