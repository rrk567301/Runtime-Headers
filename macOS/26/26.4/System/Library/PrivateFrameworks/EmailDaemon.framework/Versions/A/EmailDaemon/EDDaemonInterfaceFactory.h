@class EDCategorySubsystem, EDPersistence;

@interface EDDaemonInterfaceFactory : NSObject

@property (retain, nonatomic) EDCategorySubsystem *categorySubsystem;
@property (readonly, nonatomic) EDPersistence *persistence;

- (id)newDiagnosticInfoGathererWithServerRemoteClientsProvider:(id)a0;
- (id)newActivityRegistry;
- (id)newAccountRepository;
- (id)newMailboxRepository;
- (void).cxx_destruct;
- (void)test_tearDown;
- (id)newVIPManagerInterface;
- (id)newOutgoingMessageRepository;
- (id)newSearchableIndex;
- (id)sharedInteractionLogger;
- (id)newSenderRepository;
- (id)newFetchController;
- (id)initWithPersistence:(id)a0 categorySubsystem:(id)a1;
- (id)newMessageRepositoryWithResumable:(id)a0;
- (id)newClientResumerWithClientState:(id)a0;

@end
