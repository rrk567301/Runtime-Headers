@class EDCategorySubsystem, EDPersistence;

@interface EDDaemonInterfaceFactory : NSObject

@property (retain, nonatomic) EDCategorySubsystem *categorySubsystem;
@property (readonly, nonatomic) EDPersistence *persistence;

- (void).cxx_destruct;
- (void)test_tearDown;
- (id)initWithPersistence:(id)a0 categorySubsystem:(id)a1;
- (id)newAccountRepository;
- (id)newMailboxRepository;
- (id)newMessageRepositoryWithResumable:(id)a0;
- (id)newFetchController;
- (id)newOutgoingMessageRepository;
- (id)newSenderRepository;
- (id)newSearchableIndex;
- (id)sharedInteractionLogger;
- (id)sharedDonationController;
- (id)newVIPManagerInterface;
- (id)newActivityRegistry;
- (id)newDiagnosticInfoGathererWithServerRemoteClientsProvider:(id)a0;
- (id)newClientResumerWithClientState:(id)a0;

@end
